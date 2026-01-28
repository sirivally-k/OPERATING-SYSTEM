#include<stdio.h>
#include<string.h>
void main(){
	char p[10][10];
	int bt[10],wt[10],tat[10],twt,ttat,n,i,j;
	float awt,atat;
	printf("enter the number of processes ready to execute");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	printf("enter the processes name:\n");
	scanf("%s",p[i]);
	printf("enter the burst time");
	scanf("%d",&bt[i]);
	}
	wt[0]=0;
	twt=0;
	tat[0]=bt[0];
	ttat=bt[0];
	for(i=1;i<n;i++)
	{
		wt[i]=wt[i-1]+bt[i-1];
		tat[i]=wt[i]+bt[i];
		twt=twt+wt[i];
		ttat=ttat+wt[i]+bt[i];
	}
	awt =(float)twt/n;
	atat=(float)ttat/n;
	printf("\nprocesses number Burst time Waiting time Turn arround time");
	for(i=0;i<n;i++){
		printf("\n %s\t %d\t %d\t %d\t",p[i],bt[i],wt[i],tat[i]);
	}
	
	printf("\n average waiting time =%f",awt);
	printf("\n average turn arround time =%f",atat);
	}

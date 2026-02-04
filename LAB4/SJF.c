#include<stdio.h>
void main()
{
	int p[10],bt[10],wt[10],tat[10],twt,ttwt,n,i;
	float awt,atwt,atat,ttat;
	printf("\n Enter no.of process ready to execute");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("\n enter process number");
		scanf("%d",&p[i]);
		printf("\n enter burst time");
		scanf("%d",&bt[i]);
	}
	for(i=0;i<n;i++)
	{
		int j;
		for(j=0;j<i;j++)
		{
			int temp;
			if(bt[i]<bt[j])
			{
				temp=bt[i];
			 	bt[i]=bt[j];
			 	bt[j]=temp;
			 	temp=p[i];
			 	p[i]=p[j];
			 	p[j]=temp;
			}
		}
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
		ttat=ttat+bt[i]+wt[i];
	}
	awt=(float)twt/n;
	atat=(float)ttat/n;
	printf("\n process number bursttime waitingtime turn arround time");
	for(i=0;i<n;i++)
	{
		printf("\n %d\t %d\t %d\t %d\t",p[i],bt[i],wt[i],tat[i]);
	}
	printf("\n Average waiting time=%f",awt);
	printf("/n Average turn around time=%f",atat);
}

#include<stdio.h>
int main()
{
	printf("a\n");
	fork();
	printf("b\n");
	fork();
	printf("c\n");
}

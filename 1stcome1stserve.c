#include<stdio.h>
int main()
{	
	int a,n,arr[100];
	int b=0;
	printf("ENTER THE NUMBER OF PROCESSES");
	scanf("%d",&n);
	printf("\n");
	for(int i=0;i<n;i++)
	{
		printf("ENTER THE BUS TIME OF EACH PROCESS");
		scanf("%d",&arr[i]);
		printf("\n");
	}
	printf("WAITING TIME IS\n");
	printf("0\n");
	for(int i=0;i<n-1;i++)
	{
		b+=arr[i];
		printf("%d",b);
		printf("\n");
	}
}
#include<stdio.h>
#include<math.h>
int largest(int bt[],int n)
{
	int l;
	l=bt[0];
	for (int i = 0; i <n ; i++)
	{
		if(l<bt[i])
		{
			l=bt[i];
		}
	}
	return l;
}
void rr(int p[],int bt[],int n)
{
	int ts,x;
	x=largest(bt,n);
	printf("ENTER THE TIME SLICE:");
	scanf("%d",&ts);
		printf("PROCESS \t\t REMAINING TIME\n");
	for (int j = 0; j < ceil((x/ts));j++)
	{	//printf("HI");
		for (int i = 0; i < n; i++)
		{	if (bt[i]>=ts && bt[i]>=0)
				{
					bt[i]-=ts;
				}

			printf("%d\t\t %d",p[i],bt[i]);
		}
	}

}
int main()
{
	int p[10],bt[10],wt[10],n;
	float avg_wt;

		printf("ENTER THE NUMBER OF PROCESSES");
		scanf("%d",&n);
		printf("ENTER THE BURST TIME OF EACH PROCESS\n");
		for (int i = 0; i < n; i++)
				{
					printf("p%d :",i+1);
					scanf("%d",&bt[i]);
					p[i]=i+1;
				}	
		rr(p,bt,n);
		return 0;
}
#include<stdio.h>
void sort(int ft[],int st[],int p)
{
	for (int i = 0; i < p; i++)
	{
		int flag=i;
		{
			for (int j = i+1; i < p; j++)
			{
				if(ft[j]<ft[flag])
				{
					int temp;
					temp=ft[flag];
					ft[flag]=ft[j];
					ft[j]=temp;
					flag=j;

					int temp1;
					temp1=st[flag];
					st[flag]=st[j];
					st[j]=temp1;
					flag=j;
				}
			}
		}
	}
}
void activity_select(int st[],int ft[],int p)
{
	printf("FOLLOWING ACTIVITES ARE DISPLAYED:");
	sort(ft,st,p);
	int j,i=0;
	printf("%d",i+1);
	for (j = 1; j < p; j++)
	  {	printf("HI\n");
		if (st[j]>=ft[i])
		{
			printf("%d",j);
			i=j;
		}
	}
}
int main()
{
	int p,st[50],ft[50];
	printf("ENTER THE NUMBER OF PROCESSES");
	scanf("%d",&p);
	for (int i = 0; i < p; i++)
	{
		printf("ENTER THE START TIME OF P%d:",i+1);
		scanf("%d",&st[i]);
	}
	for (int i = 0; i < p; i++)
	{
		printf("ENTER THE FINISH TIME OF P%d:",i+1);
		scanf("%d",&ft[i]);
	}
	activity_select(st,ft,p);
	return 0;
}
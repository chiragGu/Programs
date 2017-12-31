#include<stdio.h>
#include<time.h>
int binary(int num,int lb,int ub,int a[])
{
	int mid;
	mid=(lb+ub)/2;
	if(num==a[mid])
	{
		return mid;
	}
	else
		if (num > a[mid])
		{
		 	return binary( num, mid+1,ub,a);
		}
		else
			if (num<a[mid])
			{
				return binary( num, lb,mid-1,a);
			}
	return 0;	
}
void linear(int num,int a[],int p)		
{	int flag=0;
	int i;
	for( i=0;i<p;i++)
	{
		if(a[i]==num)
		{
	    flag++;
		}
	}
	if(flag==0)
	{
		printf("NOT FOUND");
	}
	else
	{
		printf("FOUND");
	}
}
int main()
{
	int a[100],ch,num,p,t;
	printf("ENTER THE INPUT SIZE");
	scanf("%d",&p);
	printf("ENTER THE INPUT");
	for(int i=0;i<p;i++)
	{
		scanf("%d",&a[i]);
	}	
	printf("ENTER THE ELEMENT TO BE SEARCHED");
	scanf("%d",&num);
	printf("DO YOU WANT TO SEARCH WITH (1)linear OR (2)binary?\n");
	scanf("%d",&ch);
	if(ch==1)
	{
		start_t = clock();

		linear(num,a,p);
		
		end_t = clock();
		total_t = (double)(end_t - start_t)
		printf("Total time taken by CPU: %f\n", total_t  );
	}
	else
		{
			start_x = clock();
			t=binary(num,0,p,a);
			end_x = clock();
			total_x = (double)(end_x - start_x)
		printf("Total time taken by CPU: %f\n", total_x);
			if (a[t]==num)
			{
				printf("ELEMENT FOUND\n");

			}
			else 
				printf("NOT FOUND");
		}
	return 0;
}
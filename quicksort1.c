#include<stdio.h>
int partition(int a[],int l,int h)
{
	int pivot=a[h];
	int i=l-1;
	for(int j=l;j<h;j++)
		{
			if(a[j]<=pivot)
				{
					i++;
					int temp;
					temp=a[i];
					a[i]=a[j];
					a[j]=temp;
				}
		}
		int swap;
		swap=a[i+1];
		a[i+1]=a[h];
		a[h]=swap;
}
void quicksort(int a[],int l, int h)
{
	if(l<h)
	{
		int q;
		q=partition(a,l,h);
		quicksort(a,l,q-1);
		quicksort(a,q+1,h);
	}
}
void input(int a[],int n)
{
	printf("ENTER THE ELEMENTS");
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void print(int a[],int n)
{
	printf("ARRAY IS:");
	for(int i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
}
int main()
{
	int n;
	int a[50];
	printf("ENTER SIZE OF ARRAY");
	scanf("%d",&n);
	input(a,n);
	print(a,n);
	quicksort(a,0,n);
	printf("SORTED ARRAY IS:");
	print(a,n);
	return 0;
}
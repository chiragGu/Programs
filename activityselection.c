#include<stdio.h>
#include<string.h>

struct greedy
{
	int n,st,f,i;

}  s;

int main()
{
int i,n,j,temp,a[100];
struct greedy arr[100];
printf("enter no of activities");	
scanf("%d",&n);
   for(i=0;i<n;i++)
    {
 	       a[i]=i+1;
               printf("Activity_Start Time\n");
    	       printf("s[%d]\t",a[i]);
         	scanf("%d",&arr[i].st);
         	printf(" Finish Time\n");
          	printf("f[%d]\t",a[i]);
         	scanf("%d",&arr[i].f);
     }
 
  for(i=1;i<n-i;++i)
      {
        for(j=0;j<=(n-i-1);j++)
        {
            if(arr[j].f>arr[j+1].f)
            {
                temp=arr[j+1].f;
                arr[j+1].f=arr[j].f;
                arr[j].f=temp;
                
                
                temp=arr[j+1].st;
                arr[j+1].st=arr[j].st;
                arr[j].st=temp;
                
                
                 temp=a[j+1];
                a[j+1]=a[j];
                a[j]=temp;
            }
         }
       }
   
     printf("\nArranging the activity in increasing order of finish time\n\n");
     for(i=0;i<n;i++)
    {
         printf("A[%d]\t",a[i]);
         printf("%d\t",arr[i].st);
         printf("%d\n",arr[i].f);
     }
     printf("\nActivities selected are:");
     {
     	for (int i = 0; i < n; i++)
     	{
     		if(arr[i].f<arr[i+1].st)
     		{
     			printf("A[%d]\t",a[i]);
     			 printf("%d\t",arr[i].st);
        		 printf("%d\n",arr[i].f);
     		}
     	}
     }
  
     return 0;

	
 } 

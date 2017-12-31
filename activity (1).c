#include <stdio.h>
struct Activity
{
   int start, finish;
}ar[10];

void sort(struct Activity a[],int n)  
  {  
  	 int i,j,x;  
         for(i=1;i<n;i++)  
          {  
              j=i;  
              x=a[i].finish;  
 		 while(a[j-1].finish>x && j>0)  
                  { 
                     a[j].finish=a[j-1].finish;  
                     j=j-1;  
  
                  }  
  
                     a[j].finish=x;  
          }
   } 
int main()
{    
	 int no;
	 printf("enter the number of process:");
	 scanf("%d\n",&no);
	 printf("Enter Process Start Time & End Time : \n");
    int i;
    for(i = 0; i < no; i++){
        printf("Enter %d process start time: ",i+1);
        scanf("%d",&ar[i].start);
        printf("Enter %d process end time: ",i+1);
        scanf("%d",&ar[i].finish);
    }
    sort(ar,no);
	printf("Following activities are selected");
    i=0;
       printf("\n%d  ", i);
    int j;
    for (j = 1; j < no; j++)
    {
        if (ar[j].start >= ar[i].finish)
        {
            printf("%d  ", j);
            i = j;
        }
    }
    printf("\n");
  }
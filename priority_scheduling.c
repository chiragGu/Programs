#include<stdio.h>
 
int main()
{
    int bt[10],p[10],wt[10],n,total=0,pos,temp,i,j,pt[10];
    float avwt;
    printf("Enter number of process:");
    scanf("%d",&n);
 
    printf("\nEnter Burst Time:\n");
    for(i=0;i<n;i++)
    {
        printf("p%d:",i+1);
        scanf("%d",&bt[i]);
        p[i]=i+1;          
    }

    printf("ENTER PRIORITY OF EACH PROCESS\n");
    for(i=0;i<n;i++)
    {
        printf("p%d:",i+1);
        scanf("%d",&pt[i]);         
    }
    for(i=0;i<n;i++)        // sorting using selection sort
    {
        pos=i;
        for(j=i+1;j<n;j++)
        {
            if(pt[j]<pt[pos])
                pos=j;
        }
 
        temp=bt[i];
        bt[i]=bt[pos];
        bt[pos]=temp;
 
        temp=p[i];                 
        p[i]=p[pos];
        p[pos]=temp;


        temp=pt[i];                  
        pt[i]=pt[pos];
        pt[pos]=temp;
    }
 
    wt[0]=0;            
    for(int i=1;i<n;i++)            // Here, BUS time is calculated
    {
        wt[i]=bt[i-1]+wt[i-1];      //  current wt=bt of previous process+wt of previous process
        
        total+=wt[i];
    }
 
    avwt=(float)total/n;  
 
    printf("\nProcess\t    Burst Time    \tWaiting Time    \tPriority");
    for(i=0;i<n;i++)
    {
        printf("\np%d\t\t  %d\t\t    %d\t\t      %d",p[i],bt[i],wt[i],pt[i]);
    }
    printf("\n\nAverage Waiting Time=%f",avwt);
    return 0;
}
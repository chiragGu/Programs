//
//  Selection_Sort.c
//  CS-BAO(DAA 2ND YEAR)
//
//  Created by CHIRAG GUPTA on 22/08/17.
//  Copyright © 2017 CHIRAG GUPTA. All rights reserved.
//

#include <stdio.h>
void swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}

void sort(int a[])
{
    for(int i=0;i<5;i++)
    {
        int flag=i;
        for(int j=i+1;j<5;j++)
        {
            if(a[j]<a[flag])
            {
                swap(&a[flag],&a[j]);
                flag=j;
            }
        }
    }
}
void print(int arr[])
{
    for(int i=0;i<5;i++)
        printf("%d",arr[i]);
    printf("\n");
}
int main()
{
    int arr[]={2,1,6,4,5};
    printf("Now we do sorting!!\n");
    printf("Hello, World!\n");
    sort(arr);
    print(arr);
    return 0;
}


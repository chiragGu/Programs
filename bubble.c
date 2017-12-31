//
//  main.c
//  Bubble_sort
//
//  Created by CHIRAG GUPTA on 22/08/17.
//  Copyright © 2017 CHIRAG GUPTA. All rights reserved.
//

#include <stdio.h>
void bubble(int a[])
{
    for(int i=0;i<5-1;i++)
    {
        for(int j=0;j<5-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp;
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
void print(int a[])
{
    for(int i=0;i<5;i++)
    {
        printf("%d",a[i]);
        printf("\n");
    }
}
int main()
{
    int a[]={2,1,6,4,5};
    printf("Now we do sorting!!\n");
    printf("Hello, World!\n");
    bubble(a);
    print(a);
    return 0;
}

#include<stdio.h>
int gcd(int*,int*);
int main()
{
	int n1, n2;
	printf("Enter two integers for gcd");
	scanf("%d%d",&n1,&n2);
    gcd(&n1, &n2);
	return 0;
}
int gcd(int *x, int *y)
{
	int i, gcd;
	for(i=1;i<=*x && i<=*y;i++)
	{
		if(*x%i==0 && *y%i==0)
            gcd = i;
    }
    printf("G.C.D is %d", gcd);

    return 0;
}
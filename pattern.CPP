
#include<iostream.h>
#include<conio.h>
void square(int n)
{
for(int i=1;i<=n;i++)
{
for(int j=1;j<=n;j++)
cout<<"*";
cout<<endl;
}
}
void main()
{
clrscr();
int N1,N2,N3;
cout<<"Enter three values of N"<<endl;
cin>>N1>>N2>>N3;
square(N1);
square(N2);
square(N3);
getch();
}

/* OUTPUT
Enter three values of N
1
3
5
*
***
***
***
*****
*****
*****
*****
*****
*/












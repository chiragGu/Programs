
#include<iostream.h>
#include<conio.h>
int LCM(int n1,int n2,int n3)
{
int min;
if(n1<n2&&n1<n3)
min=n1;
else
if(n2<n1&&n2<n3)
min=n2;
else
min=n3;
int hcf,lcm;
for(int i=1;i<=min;i++)
{
if(n1%i==0&&n2%i==0&&n3%i==0)
hcf=i;
}
lcm=(n1*n2*n3)/hcf;
cout<<"The LCM of the numbers is "<<lcm<<"."<<endl;
}
void main()
{
clrscr();
int N1,N2,N3;
cout<<"Enter three numbers"<<endl;
cin>>N1>>N2>>N3;
LCM(N1,N2,N3);
getch();
}

/* OUTPUT
Enter three numbers
2                                                                               
3                                                                               
5
The LCM of the numbers is 30.                                                   
*/

                                                                                

                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

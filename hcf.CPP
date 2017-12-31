
#include<iostream.h>
#include<conio.h>
int HCF(int n1,int n2,int n3)
{
int min;
if(n1<n2&&n1<n3)
min=n1;
else
if(n2<n1&&n2<n3)
min=n2;
else
min=n3;
int hcf;
for(int i=1;i<=min;i++)
{
if(n1%i==0&&n2%i==0&&n3%i==0)
hcf=i;
}
cout<<"The HCF of the given numbers is "<<hcf<<endl;
}
void main()
{
clrscr();
int N1,N2,N3;
cout<<"Enter three numbers"<<endl;
cin>>N1>>N2>>N3;
HCF(N1,N2,N3);
getch();
}

/* OUTPUT
Enter three numbers
87                                                                              
15                                                                              
105                                                                             
The HCF of the given numbers is 3                                               
*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

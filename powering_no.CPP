
#include<iostream.h>
#include<conio.h>
long Power(int x,int y)
{
int temp=1,sum=0;
for(int i=1;i<=y;i++)
{
temp*=x;
sum+=temp;
}
cout<<"The result is "<<temp<<endl;
cout<<"The sum of the series is "<<sum;
}
void main()
{
clrscr();
int T,N;
cout<<"Enter the values of T and N"<<endl;
cin>>T>>N;
Power(T,N);
getch();
}

/* OUTPUT
Enter the values of T and N
4
3
The result is 64
The sum of the series is 84
*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

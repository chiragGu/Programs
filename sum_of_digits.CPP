
#include<iostream.h>
#include<conio.h>
int Sum(int n,int &sum1)
{
int temp1=n,temp2,sum=0;
do
{
temp2=temp1%10;
sum+=temp2;
temp1=temp1/10;
}
while(temp1!=0);
cout<<"The sum of the digits of "<<n<<" is "<<sum<<endl;
sum1+=sum;
}
void main()
{
clrscr();
int X,Y,Z,SUM1=0;
cout<<"Enter three numbers"<<endl;
cin>>X>>Y>>Z;
Sum(X,SUM1);
Sum(Y,SUM1);
Sum(Z,SUM1);
cout<<SUM1<<" is the sum of all the digits of all the numbers"<<endl;
getch();
}

/* OUTPUT
Enter three numbers
123
234
345
The sum of the digits of 123 is 6
The sum of the digits of 234 is 9
The sum of the digits of 345 is 12
27 is the sum of all the digits of all the numbers
*/








                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                

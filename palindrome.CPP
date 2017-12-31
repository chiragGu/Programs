
#include<iostream.h>
#include<conio.h>
long Reverse(long int n)
{
int temp1=n,temp2,rev=0;
do
{
temp2=temp1%10;
rev=rev*10+temp2;
temp1=temp1/10;
}
while(temp1!=0);
cout<<rev<<endl;
if(rev==n)
cout<<"It is a palindrome number"<<endl;
}
void main()
{
clrscr();
int N;
cout<<"Enter a number"<<endl;
cin>>N;
Reverse(N);
getch();
}

/* OUTPUT
Enter a number
456                                                                             
654                                                                             
*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                


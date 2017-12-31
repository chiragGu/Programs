
#include<iostream.h>
#include<conio.h>
void pattern1(int n)
{
for(int i=1;i<=n;i++)
{
for(int k=1;k<=(n+1)-i;k++)
cout<<i<<" ";
cout<<endl;
}
}
void pattern3(int l)
{
for(int t=l;t>=1;t--)
{
for(int o=1;o<=t;o++)
cout<<o<<" ";
cout<<endl;
}
}
void pattern2(int m)
{
for(int q=1;q<=m;q++)
{
for(int r=1;r<=m-q;r++)
cout<<" ";
for(int s=1;s<=q;s++)
cout<<s;
cout<<endl;
}
}
void main()
{
clrscr();
int ch;
cout<<"Welcome to Patterns!\nEnter the index for the corresponding Program"<<endl;
cout<<"\t1.Pattern No:1\n\t2.Pattern No:2\n\t3.Pattern No:3"<<endl;
cin>>ch;
if(ch==1)
{
int N1;
cout<<"Enter the value of N"<<endl;
cin>>N1;
pattern1(N1);
}
else
if(ch==2)
{
int N2;
cout<<"Enter the value of N"<<endl;
cin>>N2;
pattern2(N2);
}
else
{
int N3;
cout<<"Enter the value of N"<<endl;
cin>>N3;
pattern3(N3);
}
getch();
}

/* OUTPUT
Welcome to Patterns!
Enter the index for the corresponding Program                                   
        1.Pattern No:1                                                          
        2.Pattern No:2                                                          
        3.Pattern No:3                                                          
3                                                                               
Enter the value of N                                                            
5                                                                               
1 2 3 4 5                                                                       
1 2 3 4                                                                         
1 2 3                                                                           
1 2                                                                             
1                                                                               
*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                











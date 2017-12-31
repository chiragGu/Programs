
#include<iostream.h>
#include<conio.h>
     long factorial(int n)
{
     int sum=0,temp=1;
     for(int i=1;i<=n;i++)
{
      temp*=i;
      sum+=temp;
}
      cout<<"The factorial of "<<n<<" is "<<temp<<endl;
    cout<<"The sum of the series is "<<sum;
}
     void main()
{
     clrscr();
      int N;
      cout<<"Enter the value of N"<<endl;
      cin>>N;
     factorial(N);
      getch();
}

/* OUTPUT
Enter the value of N
4
The factorial of 4 is 24
The sum of the series is 33
*/
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                
                                                                                


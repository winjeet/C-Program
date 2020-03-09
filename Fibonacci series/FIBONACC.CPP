#include<iostream.h>
#include<conio.h>

void main()
{
    int n,i,a=0,b=1,c;
    clrscr();
    cout<<"Enter limit ";
    cin>>n;
    cout<<"Fibonacci Series:\n";
    for(i=0;i<n;i++)
    {
       cout<<a<<endl;
       c=a+b;
       a=b;
       b=c;
    }

  getch();
}
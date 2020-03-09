#include<iostream.h>
#include<conio.h>

void swap(int &x,int &y)
{
    int t;
    t=x;
    x=y;
    y=t;
}
void main()
{
    int a,b,t;
    clrscr();
    cout<<"Enter two value ";
    cin>>a>>b;
    cout<<"Before Swap "<<a<<" "<<b<<endl;
    swap(a,b);
    cout<<"After Swap "<<a<<" "<<b<<endl;

  getch();
}
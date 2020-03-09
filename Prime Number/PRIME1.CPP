#include<iostream.h>
#include<conio.h>
void main()
{
    int i,num,f=0;
    clrscr();
    cout<<"Enter a number: ";
    cin>>num;
    for(i=2;i<num;i++)
    {
       if(num%i==0)
       {
	 f=1;
	 break;
       }
    }
    if(f==0)
    {
       cout<<"Prime Number";
    }
    else
    {
       cout<<"Not a Prime Number";
    }
  getch();
}
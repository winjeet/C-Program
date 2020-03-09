#include<iostream.h>
#include<conio.h>
void main()
{
    int i,num,c=0;
    clrscr();
    cout<<"Enter a number: ";
    cin>>num;
    for(i=1;i<=num;i++)
    {
       if(num%i==0)
       {
	 c++;
       }
    }
    if(c==2)
    {
       cout<<"Prime Number";
    }
    else
    {
       cout<<"Not a Prime Number";
    }
  getch();
}
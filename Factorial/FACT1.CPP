#include<iostream.h>
#include<conio.h>
void main()
{
    int i,num,fact=1;
    clrscr();
    cout<<"Enter a number: ";
    cin>>num;
    for(i=1;i<=num;i++)
    {
       fact = fact * i;
    }
    cout<<"factorial = "<<fact;

  getch();
}
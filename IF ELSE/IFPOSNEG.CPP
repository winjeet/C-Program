#include<iostream.h>
#include<conio.h>
void main()
{
    int a;
    clrscr();
    cout<<"Enter a number: ";
    cin>>a;
    if(a>0)
    {
      cout<<"Positive Number";
    }
    else if(a<0)
    {
      cout<<"Negative Number";
    }
    else
    {
      cout<<"Zero";
    }
 getch();
}
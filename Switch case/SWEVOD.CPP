#include<iostream.h>
#include<conio.h>
void main()
{
   int a;
   clrscr();
   cout<<"Enter Number ";
   cin>>a;
   switch(a%2)
   {
      case 0:
	     cout<<"Even Number";
	     break;
      case 1:
	     cout<<"Odd Number";
	     break;
   }
 getch();
}
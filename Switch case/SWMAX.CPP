#include<iostream.h>
#include<conio.h>
void main()
{
   int a,b;
   clrscr();
   cout<<"Enter Two Number: ";
   cin>>a>>b;
   switch(a>b)
   {
      case 0:
	     cout<<"Greater number is "<<b;
	     break;
      case 1:
	     cout<<"Greater number is "<<a;
	     break;
   }
 getch();
}
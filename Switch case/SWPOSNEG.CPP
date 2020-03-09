#include<iostream.h>
#include<conio.h>
void main()
{
   int a;
   clrscr();
   cout<<"Enter number ";
   cin>>a;
   switch(a>0)
   {
       case 1:
	      cout<<"Positive Number";
	      break;
       case 0:
	      switch(a<0)
	      {
		 case 1:
			cout<<"Negative Number";
			break;
		 case 0:
			cout<<"Zero";
			break;
	      }
   }
 getch();
}
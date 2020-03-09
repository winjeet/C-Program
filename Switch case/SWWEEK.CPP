#include<iostream.h>
#include<conio.h>
void main()
{
   int s;
   clrscr();
   cout<<"Enter a number for Week: ";
   cin>>s;
   switch(s)
   {
      case 1:
	     cout<<"Sunday";
	     break;
      case 2:
	     cout<<"Monday";
	     break;
      case 3:
	     cout<<"Tuesday";
	     break;
      case 4:
	     cout<<"Wednesday";
	     break;
      case 5:
	     cout<<"Thursday";
	     break;
      case 6:
	     cout<<"Friday";
	     break;
      case 7:
	     cout<<"Saturday";
	     break;
      default:
	     cout<<"Invaild number(press 1-7)";
	     break;

   }

 getch();
}
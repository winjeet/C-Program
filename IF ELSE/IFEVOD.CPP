#include<iostream.h>
#include<conio.h>
void main()
{
   int a;
   clrscr();
   cout<<"Enter a number: ";
   cin>>a;
   if(a&1)
   {
      cout<<"Number is Odd";
   }
   else
   {
      cout<<"Number is Even";
   }
 getch();
}
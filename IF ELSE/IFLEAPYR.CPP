#include<iostream.h>
#include<conio.h>
void main()
{
   int a;
   clrscr();
   cout<<"Enter Year: ";
   cin>>a;
   if(a%4==0 && a%100!=0 || a%400==0)
   {
      cout<<"Leap Year";
   }
   else
   {
      cout<<"Not a Leap Year";
   }
   getch();
}
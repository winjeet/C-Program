#include<iostream.h>
#include<conio.h>
void main()
{
   int a,b;
   clrscr();
   cout<<"Enter two numbers: ";
   cin>>a>>b;
   if(a>b)
   {
      cout<<"Greater number is "<<a;
   }
   else
   {
      cout<<"Greater number is "<<b;
   }
   getch();
}
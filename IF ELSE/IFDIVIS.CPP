#include<iostream.h>
#include<conio.h>
void main()
{
   int a;
   clrscr();
   cout<<"Enter number ";
   cin>>a;
   if(a%5==0 && a%11==0)
   {
      cout<<"Divisible by both 5 & 11";
   }
   else if(a%5==0)
   {
      cout<<"Divisible by 5";
   }
   else if(a%11==0)
   {
      cout<<"Divisible by 11";
   }
   else
   {
      cout<<"Not Divisible by 5 & 11";
   }
 getch();
}
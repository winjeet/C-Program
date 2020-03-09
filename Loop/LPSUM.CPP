#include<iostream.h>
#include<conio.h>
void main()
{
   int i,n,sum=0;
   clrscr();
   cout<<"Enter number ";
   cin>>n;
   for(i=0;i<=n;i++)
   {
      sum = sum + i;
   }
   cout<<"Sum = "<<sum;
 getch();
}
#include<iostream.h>
#include<conio.h>

int fact(int n)
{
   if(n<=1)
   {
      return(1);
   }
   else
   {
     n=n*fact(n-1);
     return(n);
   }
}
void main()
{
    int n;
    clrscr();
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"factorial = "<<fact(n);

  getch();
}
#include<iostream.h>
#include<conio.h>

void main()
{
    int a,n,r,p=0;
    clrscr();
    cout<<"Enter a number: ";
    cin>>n;
    a=n;
    while(n>0)
    {
       r=n%10;
       p=p*10+r;
       n=n/10;
    }
    if(a==p)
    {
	cout<<"Palindrome";
    }
    else
    {
	cout<<"Not Palindrome";
    }
  getch();
}
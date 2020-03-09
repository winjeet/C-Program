#include<iostream.h>
#include<conio.h>
void main()
{
  int a,b,c;
  clrscr();
  cout<<"Enter Three numbers: ";
  cin>>a>>b>>c;
  if(a>b)
  {
    if(a>c)
    {
      cout<<"Greater number is "<<a;
    }
    else
    {
      cout<<"Greater number is "<<c;
    }
  }
  else if(b>c)
  {
    cout<<"Greater number is "<<b;
  }
  else
  {
    cout<<"Greater number is "<<c;
  }
  getch();
}
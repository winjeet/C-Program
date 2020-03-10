#include<iostream.h>
#include<conio.h>

class money
{
   public:
	  float cir(int a)
	  {
	     return(3.14*a*a);
	  }
};

class heist : public money
{
   public:
	  int rec(int a,int b)
	  {
	     return(a*b);
	  }
};

void main()
{
   heist obj;
   clrscr();
   float r;
   int l,b;
   cout<<"Enter Radius ";
   cin>>r;
   cout<<"Enter L x B ";
   cin>>l>>b;
   cout<<"\n(base class) Area of Circle = "<<obj.cir(r);
   cout<<"\n(derived class) Area of Rectangle = "<<obj.rec(l,b);
  getch();
}
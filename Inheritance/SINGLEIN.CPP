#include<iostream.h>
#include<conio.h>

class money
{
   public:
	  int sum(int a,int b)
	  {
	     return(a+b);
	  }
};

class heist : public money
{
   public:
	  int mul(int a,int b)
	  {
	     return(a*b);
	  }
};

void main()
{
   heist obj;
   int x,y;
   cout<<"Enter two value ";
   cin>>x>>y;
   cout<<"\n(base class) Addition = "<<obj.sum(x,y);
   cout<<"\n(derived class) Multiplication = "<<obj.mul(x,y);
  getch();
}
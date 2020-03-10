#include<iostream.h>
#include<conio.h>

class money
{
   public:
	  int a,total;
	  void gtA()
	  {
	   a=10;
	   total=0;
	  }
	  void A()
	  {
	     cout<<"class money(base)\n";
	     cout<<"value of a = "<<a;
	     cout<<"\nTotal = "<<total;
	  }
};

class heist:public money
{
   public:
	  int b;
	  void gtB()
	  {
	   b=20;
	  }
	  void B()
	  {
	     total = a + b;
	     cout<<"\nclass heist(base)\n";
	     cout<<"value of a = "<<a;
	     cout<<"\nvalue of b = "<<b;
	     cout<<"\nTotal = "<<total;
	  }
};

class professor : public heist
{
    public:
	   int c;
	   void gtC()
	   {
	    c=30;
	   }
	   void C()
	   {
	     total = a + b + c;
	     cout<<"\nclass heist(base)\n";
	     cout<<"value of a = "<<a;
	     cout<<"\nvalue of b = "<<b;
	     cout<<"\nvalue of c = "<<c;
	     cout<<"\nTotal = "<<total;

	   }
};

void main()
{
   professor obj;
   clrscr();
   obj.gtA();
   obj.gtB();
   obj.gtC();
   obj.A();
   obj.B();
   obj.C();
   getch();
}
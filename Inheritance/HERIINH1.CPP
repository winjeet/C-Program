#include<iostream.h>
#include<conio.h>

class money
{
   public:
	  int a,b;
	  void get()
	  {
	   a=10;
	   b=20;
	  }
};

class heist:public money
{
   public:
	  void sum()
	  {
	    int s;
	    s = a + b;
	    cout<<"Sum = "<<s<<endl;;
	  }
};

class professor : public money
{
    public:
	   void mul()
	   {
	     int m;
	     m = a * b;
	     cout<<"Multiplication = "<<m;
	   }
};

void main()
{
   heist h;
   professor p;
   clrscr();
   h.get();
   h.sum();
   p.get();
   p.mul();
 getch();
}
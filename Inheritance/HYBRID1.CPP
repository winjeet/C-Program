#include<iostream.h>
#include<conio.h>

class money
{
     protected:
	  int x;
     public:
	  void get_x(int a)
	  {
	       x=a;
	  }
	  void show_x()
	  {
	       cout<<"Value of x = "<<x<<endl;
	  }
};

class heist : public money
{
     protected:
	  int y;
     public:
	  void get_y(int b)
	  {
		y=b;
	  }
	  void show_y()
	  {
	       cout<<"value of y = "<<y<<endl;
	  }
};

class professor
{
     protected:
	  int p;
     public:
	   void get_p(int c)
	   {
		p=c;
	   }
	   void show_p()
	   {
	       cout<<"Value of p = "<<p<<endl;
	   }
};

class berlin : public professor,public heist
{
       int q;
     public:
	   void show_q()
	   {
	       q = y + p * 2;
	       show_x();
	       show_y();
	       show_p();
	       cout<<"Value of q = "<<q<<endl;
	   }
};

void main()
{
    berlin obj;
    clrscr();
    obj.get_x(10);
    obj.get_y(20);
    obj.get_p(30);
    obj.show_q();
 getch();
}
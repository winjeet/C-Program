#include<iostream.h>
#include<conio.h>
class CIR
{
   private:
	 int r;
	 float ar;
	 void cal();
   public:
	 void get(int x)
	 {
	    r=x;
	 }

	 void disp()
	 {
	    cal();
	    cout<<"Area of Circle = "<<ar;
	 }
};
void CIR :: cal()
{
    ar = 3.14 * r * r;
}
void main()
{
   clrscr();
   CIR ob;
   CIR *ptr;
   ptr=&ob;
   int x;
   cout<<"Enter Radius: ";
   cin>>x;
   ptr->get(x);
   (*ptr).disp();

getch();
}


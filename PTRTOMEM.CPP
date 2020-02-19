#include<iostream.h>
#include<conio.h>
class CIR
{
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
	 cout<<"Area of circle = "<<ar;
     }
};
void CIR :: cal()
{
   ar = 3.14 * r * r;
}
void main()
{
   clrscr();
   void (CIR :: *ptr)() =& CIR::disp;
   CIR ob;
   ob.get(5);
   (ob.*ptr)();
   getch();
}

#include<iostream.h>
#include<conio.h>

class money
{
   public:
	  int cement(int c_qty)
	  {
	     int total_cost = c_qty * 250;
	     return total_cost;
	  }
};

class heist
{
   public:
	  int iron(int i_qty)
	  {
	     int total_cost = i_qty * 4500;
	     return total_cost;
	  }
};

class professor : public money,public heist
{
    public:
	   total(int c_qty,int i_qty)
	   {
	      int cem,irn,total_cost;
	      cem = cement(c_qty);
	      irn = iron(i_qty);
	      total_cost = cem + irn;
	      return total_cost;
	   }
};

void main()
{
   professor obj;
   clrscr();
   int c,i;
   cout<<"Enter Cement quantity: ";
   cin>>c;
   cout<<"Enter Iron quantity: ";
   cin>>i;
   cout<<"\n Total Cost = "<<obj.total(c,i);
  getch();
}
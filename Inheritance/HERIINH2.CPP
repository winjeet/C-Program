#include<iostream.h>
#include<conio.h>

class clg
{
    int code;
    char cname[20];
   protected:
	 void take()
	 {
	    cout<<"Enter college name = ";
	    cin>>cname;
	    cout<<"college code = ";
	    cin>>code;
	 }
	 void show()
	 {
	    cout<<"College Code = " <<code<<endl;
	    cout<<"College Name = "<<cname<<endl;
	 }
};
class std : public clg
{
      int roll;
      char name[20];
   public:
	 void ge()
	 {
	    cout<<"Enter student name = ";
	    cin>>name;
	    cout<<"roll no = ";
	    cin>>roll;
	    take();
	 }
	 void disp()
	 {
	    cout<<"Student Details"<<endl;
	    cout<<"Name of student = "<<name<<endl;
	    cout<<"Roll no.= "<<roll<<endl;
	    show();
	 }
};
class pro : public clg
{
     int reg;
     char pname[20];
   public:
	 void gt()
	 {
	    cout<<"Enter professor name = ";
	    cin>>pname;
	    cout<<"reg. no. = ";
	    cin>>reg;
	    take();
	 }
	 void dis()
	 {
	    cout<<endl<<"Professor Details"<<endl;
	    cout<<"Registration id = "<<reg<<endl;
	    cout<<"Name of professor = "<<pname<<endl;
	    show();
	 }
};
void main()
{
    std s;
    pro p;
    clrscr();
    s.ge();
    p.gt();
    cout<<"********************************"<<endl;
    s.disp();
    p.dis();

 getch();
}


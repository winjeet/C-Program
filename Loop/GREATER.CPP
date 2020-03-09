#include<iostream.h>
#include<conio.h>

int max(int a[],int n)
{
    int i,m;
    m=a[0];
    for(i=1;i<n;i++)
    {
       if(a[i]>m)
       {
	  m=a[i];
       }
    }
    return m;
}
void main()
{
    int a[100],n,i;
    clrscr();
    cout<<"Enter size: ";
    cin>>n;
    cout<<"Enter element ";
    for(i=0;i<n;i++)
    {
	cin>>a[i];
    }
    cout<<"Maximun value = "<<max(a,n);

  getch();
}
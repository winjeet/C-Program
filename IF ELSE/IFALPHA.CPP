#include<iostream.h>
#include<conio.h>
void main()
{
   char ch;
   clrscr();
   cout<<"Enter character: ";
   cin>>ch;
   if(ch>='a'&& ch<='z' || ch>='A'&& ch<='Z')
   {
       cout<<"Character is Alphabet";
   }
   else
   {
       cout<<"Not Alphabet";
   }
}
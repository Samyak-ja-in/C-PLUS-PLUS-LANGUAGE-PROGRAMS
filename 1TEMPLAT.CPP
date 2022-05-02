#include<conio.h>
#include<iostream.h>
template <class X,class Y>
Y big(X a,Y b)
{
 if(a>b)
 return (a);
 else
 return b;
}
void main()
{
clrscr();
/* float x,y;
 cout<<"enter two numbers";
 cin>>x>>y;  */
 cout<<"\nbig number="<<big(2.5,2);
getch();
}
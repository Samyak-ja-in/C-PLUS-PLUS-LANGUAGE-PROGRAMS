#include<conio.h>
#include<iostream.h>
template<class T>
void swap(T a,T b)
{
 T temp;
 temp=b;
 b=a;
 a=temp;
 cout<<a<<"\n"<<b;
}
void main()
{
 clrscr();
 int n;
 float x,y;
cout<<"enter 1 for int and 2 for float";
cin>>n;
if(n==1)
{int x,y;}
else
{float x,y;}
cout<<"enter two numbers";
cin>>x>>y;
cout<<"before swapping numbers is x="<<x<<"\ny="<<y;
 cout<<"\nafter swapping numbers\n";
 swap(x,y);
 getch();
}
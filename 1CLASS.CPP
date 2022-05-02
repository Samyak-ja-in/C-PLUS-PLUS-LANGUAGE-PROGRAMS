#include<conio.h>
#include<iostream.h>
class complex
{
private:
float a,b;
public:
void getdata()
{
float x,y;
cout<<"enter real and comples part";
cin>>x>>y;
a=x;
b=y;
}
void put_data()                   //hence here member functions accessed
{                                 // private elements
cout<<"a="<<a<<"\nb="<<b;
}
};
void main()
{
clrscr();
complex c1;
c1.getdata();
c1.put_data();
getch();
}
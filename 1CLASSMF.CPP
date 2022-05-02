#include<conio.h>
#include<iostream.h>
class complex
{
private:
float a,b;
public:
void getdata();
void putdata()
{
cout<<"a="<<a<<"b="<<b;
}
};
void complex::getdata()
{
float x,y;
cout<<"enter real and complex parts";
cin>>x>>y;
a=x;
b=y;
}
void main()
{
clrscr();
complex c1;
c1.getdata();
c1.putdata();
getch();
}
#include<conio.h>
#include<iostream.h>
class A
{
int a;
};
class B:public A
{ int a;
public:
void setdata(int x)
{a=x;}
int showdata()
{cout<<"a="<<a;
}
};
void main()
{
B b;
b.setdata(4);
b.showdata();
getch();
}




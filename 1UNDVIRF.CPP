#include<conio.h>
#include<iostream.h>
class A
{
public:
void f1()
{cout<<"\nf1::class A";}
};
class B:public A
{
public:
void virtual f1()
{cout<<"\nf1::class B";}
};
void main()
{
clrscr();
B b;
A *p;
p=&b;
p->f1();
b.B::f1();
getch();
}

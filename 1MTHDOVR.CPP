//method overriding,overloading,hiding.
#include<conio.h>
#include<iostream.h>
class A
{
public:
void f1()
{cout<<"\nclass A f1 function";}
void f2()
{cout<<"\nclass A function f2";}
};
class B:public A
{
public:
void f1()
{cout<<"\nclass B function f1";}
void f2(int x)
{cout<<"\nclass B function f2";}
};
void main()
{
clrscr();
B b;
b.f1();//RUNS binds with class B f1 due to early binding.
//b.f2();//ERROR
b.f2(5);//RUNS and binds with class B f2 due to prototype of f2 exactly same
getch();
}

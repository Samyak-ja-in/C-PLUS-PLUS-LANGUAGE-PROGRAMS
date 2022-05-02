#include<iostream.h>
#include<stdio.h>
#include<conio.h>
class A
{ private:
A()
{cout<<"Class A constructor";}
friend class B;
};
class B
{ public:
B()
{
A a;
cout<<"Class B constructor";
}
};
void main()
{
B b;
getch();
}
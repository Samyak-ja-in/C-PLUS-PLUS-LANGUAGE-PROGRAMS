#include<conio.h>
#include<iostream.h>
class A
{public:
int p;
};
class B:public A
{ public:
void C()
{cout<<"SAMYAK";}
~B()
{cout<<"destructor B";}
};
int main()
{
clrscr();
B b;
b.C();
getch();
return(0);
}
//constructor in inheritance
#include<conio.h>
#include<iostream.h>
class A
{
private:
int a;
public:
A()
{cout<<"\nsamyak class A";}
/*~A()
{cout<<"\n hello from Destructor A";}*/
};
class B
{
private:                     //baby class me pahele parent class ka
int b;                      //constructor chalta h call pahele baby
public:                      //class ka hota h
B()
{cout<<"\nhello samyak from B";}
/*~B()
{cout<<"\nhello from destructor B";*/
};
class C:public A,public B //if here order changed then order of constructor
{                         //execution changed
public:
/*C()
{
cout<<"\nsamyak class C";} */
};
void main()
{
clrscr();
C obj3;
B obj1;
A obj2;
getch();
}
#include<conio.h>
#include<iostream.h>
class A
{
//private:
protected:
void sum()
{
int p,q;
cout<<"enter two numbers";
cin>>p>>q;
cout<<"sum is="<<p+q;
}
};
class B:public A
{
public:
void s()
{
sum();
}
};
void main()
{
clrscr();
/*A a;
a.sum();*/
B b;
b.s();
getch();
}
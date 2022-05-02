//understanding argumentative constructor
#include<conio.h>
#include<iostream.h>
class A
{
protected:
int a;
public:
A(int k)
{
a=k;
cout<<"\nconstructor a";
}
};
class B:public A
{
private:
int b;
public:
/*B()
{}*/
B(int x,int y):A(x)
{
 b=y;
 cout<<"\nconstructor b";
}
void showdata()
{
cout<<"\na="<<a<<"\nb="<<b;
}
};
void main()
{
clrscr();
B obj1(2,3);
/*B obj1;  */
obj1.showdata();
getch();
}
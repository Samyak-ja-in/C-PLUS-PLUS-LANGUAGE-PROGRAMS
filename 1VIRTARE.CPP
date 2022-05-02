#include<conio.h>
#include<iostream.h>
class shape                      //ABSTRACT CLASS
{
protected:
int x,y;
public:
void getdata()
{
cout<<"enter dimensions";
cin>>x>>y;
}
void virtual display_area()=0; //pure virtual function.
};
class rectangle:public shape
{
public:
void display_area()
{
cout<<"area of rectangle="<<x*y;
}
};
class triangle:public shape
{
public:
void display_area()
{cout<<"area of triangle="<<(0.5*x*y);}
};
class circle:public shape
{
public:
void display_area()
{cout<<"area of circle="<<(3.14*x*x);}
};
void main()
{
clrscr();
int n;
cout<<"for rectangle enter 0\nfor triangle enter 1\n for circke enter 2";
cin>>n;
switch(n)
{
case 0:
{
rectangle R;
shape *p;
p=&R;
p->getdata();
p->display_area();
break;
}
case 1:
{
triangle T;
T.getdata();
T.display_area();
break;
}
case 2:
{
circle C;
C.getdata();
C.display_area();
break;
}
}
getch();
}


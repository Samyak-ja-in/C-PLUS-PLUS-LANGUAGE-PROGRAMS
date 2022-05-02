#include<conio.h>
#include<iostream.h>
class whole;
class integer
{
private:
int a;
public:
void setdata()
{
int x;
cout<<"enter integral value";
cin>>x;
a=x;
}
friend void sum(integer,whole); //yaha frnd function ne 2class ke members ko
};  //access kiya h but ek member function sirf ek class ke members ko hi
		//  access kr skta h hence friend function is useful.
class whole
{
private:
int a;
public:
void setdata()
{
int x;
cout<<"enter whole value";
cin>>x;
a=x;
}
friend void sum(integer,whole);
};
void sum(integer p,whole q)
{
cout<<"sum of integer and whole number is="<<p.a+q.a;
}
void main()
{
clrscr();
integer I;
whole W;
I.setdata();
W.setdata();
sum(I,W);
getch();
}

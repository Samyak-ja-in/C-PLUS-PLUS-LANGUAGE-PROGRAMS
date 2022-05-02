//argumentative constructor by multiple inheritance
#include<conio.h>
#include<iostream.h>
class alpha
{
protected:
int a,b;
alpha(int p,int q)
{
a=p;
b=q;
cout<<"\nconstructor alpha";
}
};
class beta
{
protected:
float c,d;
beta(float r,float s)
{
 c=r;
 d=s;
 cout<<"\nconstructor beta";
}
};
class gamma:public beta,public alpha //multiple inheritance me jo declare
{                        //pahele hoga uski coding pahele chalegi
private:                 //agar alpha pahele declare hota toh alpha ki coding
int e,f;                   //pahele chalti bad me beta ki chalti.
public://yaha f me garbage value aayegi kyuki e f se bad me initilize hoga
gamma(int j,int k,float l,float m):alpha(j*2,k),beta(l+1,m),f(j*e)
{
e=j;            //4variables(jklm) ne 6 ko initialize(abcdef)karaya h yaha
cout<<"\nconstructor gamma";
}
void showdata()
{
cout<<"\na="<<a<<"\nb="<<b<<"\nc="<<c<<"\nd="<<d<<"\ne="<<e<<"\nf="<<f;
}
};
void main()
{
clrscr();
gamma obj1(2,4,3.5,0.5);
cout<<"\nmember values";
obj1.showdata();
getch();
}


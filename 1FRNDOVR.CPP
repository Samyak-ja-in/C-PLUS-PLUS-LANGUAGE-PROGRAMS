#include<conio.h>
#include<iostream.h>
class complex
{
private:
int a,b;
public:
void setdata()
{
int x,y;
cout<<"enter two values";
cin>>x>>y;
a=x;
b=y;
}
void showdata();
friend complex operator*(complex,complex);
friend complex operator-(complex);
};
complex operator*(complex p,complex q)
{
complex temp;
temp.a=p.a*q.a-p.b*q.b;
temp.b=p.a*q.b+p.b*q.a;
return(temp);
}
complex operator-(complex z)
{
complex temp;
temp.a=-z.a;
temp.b=-z.b;
return(temp);
}
void complex:: showdata()
{
cout<<"\nafter operation complex="<<a<<"+"<<b<<"i";
}
void main()
{
clrscr();
complex c1,c2,c3,c4;
c1.setdata();
c2.setdata();
c3=c1*c2;             //  c3=operator*(c1,c2);
c3.showdata();
c4=-c1;    //  c4=operator-(c1);
c4.showdata();
getch();
}
//multilevel inheritance
#include<conio.h>
#include<iostream.h>
class student                                    //student
{                                                //test
double r;                                        //result
public:
void setrollno()
{
double x;
cout<<"enter roll no";
cin>>x;
r=x;
}
void showrollno()
{
cout<<"\nroll no is";
cout<<r;
}
};
class test:public student
{
//private:
protected:
float m,s;
public:
void setmarks()
{
cout<<"enter science and maths marks";
cin>>s>>m;
}
void showmarks()
{
cout<<"\nmarks in science="<<s<<"\nmarks in maths="<<m;
}
};
class result: public test
{
protected:
float total;
public:
void display()
{
total=s+m;
showrollno();
showmarks();
cout<<"\ntotal="<<total;
}
};
/*class A:public result
{              // protected variable ka agar dusti baar derivation hota h toh
int sub;       //usme garbage value aati h 2nd derivation me.
public:
void subt()
{
cout<<"\nsubtraction="<<s-m;
}
};   */
void main()
{
clrscr();
result S1;
S1.setrollno();
S1.setmarks();
S1.display();
/*A a;
a.subt();*/
getch();
}
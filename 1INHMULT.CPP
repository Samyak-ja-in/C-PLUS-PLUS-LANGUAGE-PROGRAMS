//multiple inheritance
#include<conio.h>
#include<iostream.h>
class A
{
private:
/*protected:*/
float a;
public:
void seta()
{
cout<<"enter a";
cin>>a;
}
float geta()
{
return a;
}
};
class B
{
private:
/*protected:*/
float b;
public:
void setb()
{
cout<<"enter b";
cin>>b;
}
float getb()
{
return b;
}
};
class Sum:public A,public B
{
private:
float s;
public:
float add()
{
float p;
p=geta()+getb()/*a+b*/;
return(p);
}
};
void main()
{
clrscr();
Sum S;
S.seta();
S.setb();
cout<<"sum is="<<S.add();
getch();
}
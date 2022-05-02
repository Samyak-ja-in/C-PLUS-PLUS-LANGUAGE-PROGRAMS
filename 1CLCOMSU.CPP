#include<conio.h>
#include<iostream.h>
class complex
{
private:
float a,b;
public:
void getdata()
{
float x,y;
cout<<"enter complex number real and imaginary part";
cin>>x>>y;
a=x;
b=y;
}
void showdata()
{
cout<<"after addition\n"<<"complex number="<<a<<"+i"<<b;
}
complex operator+(complex c);
/*{
complex temp;
temp.a=a+c.a;
temp.b=b+c.b;
return(temp);
}*/
};
complex complex::operator+(complex c)
{
complex temp;
temp.a=a+c.a;
temp.b=b+c.b;
return (temp);
}
void main()
{
clrscr();
complex c1,c2,c3;
c1.getdata();
c2.getdata();
/*c3=c1+c2; */
c3=c1.operator+(c2);
c3.showdata();
getch();
}













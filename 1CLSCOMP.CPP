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
cout<<"\nenter real and complex part";
cin>>x>>y;
a=x;
b=y;
}
void putdata()
{
cout<<"sumation of two complex is:";
cout<<"\nreal part="<<a<<"\nimaginary part="<<b;
}
complex add(complex c)
{
complex temp;
temp.a=a+c.a;
temp.b=b+c.b;
return(temp);
}
};
void main()
{
clrscr();
complex c1,c2,c3;
c1.getdata();
c2.getdata();
c3=c1.add(c2);
c3.putdata();
getch();
}
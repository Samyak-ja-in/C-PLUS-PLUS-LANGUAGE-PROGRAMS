#include<conio.h>
#include<iostream.h>
class complex
{
float a,b;
public:
void setdata()
{
float x,y;
cout<<"input complex number";
cin>>x>>y;
a=x;
b=y;
}
friend float sum(complex);
};
float sum(complex c)
{
float temp;
temp=c.a+c.b;
return(temp);
}
void main()
{
clrscr();
complex c1;
float ans;
c1.setdata();
ans=sum(c1);
cout<<"addition is="<<ans;
getch();
}








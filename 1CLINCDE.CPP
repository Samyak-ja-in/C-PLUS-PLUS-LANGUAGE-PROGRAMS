#include<conio.h>
#include<iostream.h>
class integer
{
int a;
public:
void setdata()
{int x;
cout<<"enter value";
cin>>x;
a=x;}
void showdata()
{cout<<"\nentered values are";
cout<<" "<<"a="<<a;
}
integer operator-()
{
integer i;
i.a=-a;
return(i);
}
integer operator++()
{
integer i;
i.a=++a;
return(i);
}
integer operator++(int)
{
integer i;
i.a=a++;
return(i);
}
};
void main()
{
clrscr();
integer i1,i2;
integer i3,i4;
i1.setdata();
i1.showdata();
/*i2=i1.operator++();
i3=i1.operator++(int);  */
i2=++i1;
i2.showdata();
i3=i1++;
i3.showdata();
i4=-i1;
i4.showdata();
i1.showdata();
getch();
}
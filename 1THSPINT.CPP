#include<iostream.h>
#include<stdio.h>
#include<conio.h>
class box
{
int l,b,h;
public:
void setdimension(int l,int b,int h)
{this->l=l;this->b=b;this->h=h;}
void showdimension()
{printf("\nl=%d b=%d h=%d",l,b,h);}
};
void main()
{
clrscr();
box B;
B.setdimension(5,6,7);
B.showdimension();
B.setdimension(6,7,8);
B.showdimension();
/*B.setdimension(5,6,7);
B.showdimension(); */
getch();
}
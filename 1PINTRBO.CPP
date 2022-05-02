//TO SET DIMENSION OF A BOX USING POINTERS TO OBJECTS.
#include<stdio.h>
#include<iostream.h>
#include<conio.h>
class box
{
int l,b,h;
public:
void setdimension(int x,int y,int z)
{l=x;b=y;h=z;}
void showdimension()
{printf("\nl=%d b=%d h=%d",l,b,h);}
};
void main()
{
clrscr();
box B;
box *p;
p=&B;
p->setdimension(5,6,7);
p->showdimension();
(*p).setdimension(6,7,8);
(*p).showdimension();
/*B.setdimension(5,6,7);
B.showdimension(); */
getch();
}
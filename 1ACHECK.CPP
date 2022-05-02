#include<iostream.h>
#include<conio.h>
class room
{
int length;
int width;
public:
room()
{
length=0;
width=0;
}
room (int value)
{length=width=8;}
void display()
{
cout<<length<<' '<<width;
}
};
void main()
{
clrscr();
room objroom1;
room objroom2(3);
objroom1.display();
objroom2.display();
getch();
}
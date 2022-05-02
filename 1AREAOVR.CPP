#include<conio.h>
#include<iostream.h>
float area(float,float);
float area(float);
void main()
{
clrscr();
int r;
cout<<"Enter radius";
cin>>r;
int l,b;
cout<<"Enter length and breadth";
cin>>l>>b;
cout<<"\nArea of circle is"<<area(r);
cout<<"\nArea of rectangle is"<<area(l,b);
getch();
}
float area(float a,float b)
{
return(a*b);
}
float area(float p)
{
return(3.14*p*p);
}
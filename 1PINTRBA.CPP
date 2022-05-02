#include<conio.h>
#include<iostream.h>
void main()
{
clrscr();
int a,*p=0,**q;
cout<<"\n null pointer value="<<*p;
cout<<"\n address of null pointer is"<<&p;
cout<<"\n enter a";
cin>>a;
p=&a;
cout<<"\naddress of a is="<<p;
a++;
cout<<"\n a="<<a;
cout<<"\naddress of a remains same as"<<&a;
q=&p;
cout<<"\n address of p pointer is"<<q;
p++;
cout<<"\n address of p pointer after incrementing becomes"<<&p;
getch();
}
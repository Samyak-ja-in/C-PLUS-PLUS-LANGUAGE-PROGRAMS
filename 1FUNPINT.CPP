//UNDERSTANDING FUNCTION POINTER.
#include<conio.h>
#include<iostream.h>
void (*funpointer)(int,int);//arguments hamesha pointerfunction parenthesiske bahar aate h
void add(int x,int y)
{cout<<"\n"<<x<<"+"<<y<<"="<<x+y;}
void sub(int x,int y)
{cout<<"\n"<<x<<"-"<<y<<"="<<x-y;}
void main()
{
clrscr();
int a,b;
cout<<"enter integral values of a and b";
cin>>a>>b;
funpointer=&add; //pointer storing address of add fuction
funpointer(a,b);//pointer calling add function for a,b argument and executes its body
funpointer=&sub;//pointer storing address of sub function
funpointer(a,b);//pointer calling sub function passing a,b as an argument and executes its body
getch();
}
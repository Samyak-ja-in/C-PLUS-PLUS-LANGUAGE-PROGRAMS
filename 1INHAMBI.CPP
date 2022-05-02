//TO ILLUSTRATE AMBIGUITY IN INHERITANCE.
#include<conio.h>
#include<iostream.h>
class A
{
public:
void show()
{
cout<<"\n for A";
}
};
class B/*:public A*/    //here we have done a,b dependent and p dependant on both
{                   //a b hence we have a warning base class A is inaccesible
 public:            //because also in B.
 void show()
 {
  cout<<"\n for B";
 }
};
class P:public A,public B
{
 public:
 /*void show()
 {
 cout<<"\n for P";
 B::show();
 }   */
};
void main()
{
clrscr();
P p;
p.A::show();//agar yha scope resolution operator nhi lagate toh error aayegi ki
p.B::show(); //a ya b me se kiske score ko call kre
p.A::show();
getch();
}
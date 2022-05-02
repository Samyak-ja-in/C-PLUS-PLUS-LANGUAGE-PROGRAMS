#include<conio.h>
#include<iostream.h>
class A
{
public:
  void virtual f1()
 {cout<<"\nf1 function base class";}
};//virtual void likho ya void virtual likho then baat ek hi h
class B:public A
{
public:
 void /*virtual*/ f1()//virtual likhne ki jarurat nhi virtual hi mana jayega
 {cout<<"\nf1 function derived class";}
};
void main()//not virtual function ki early binding hoti h(compile time)
{clrscr();         //virtual function ki late binding hoti h(runtime)
A obj1; //hence agar hum base class wale function ko virtual declare kr de
B obj2;//uski late binding hogi pointer me kiska address store h usko base
obj1.f1();//mana jayega na ki pointer ke type ko.
obj2.f1();
A *p;
//cout<<sizeof(obj1);
p=&obj2;
p->f1();//yaha f1 call hona chahiye tha derived class wala pr call ho jayega
getch();//base class wala kyuki jab overrided function ko base class me virtu
}// declare nhi kiya jata tab pointer ke type ko base mana jata h yaha pointer
//ka type A h hence compiler pahele class A me jakr f1 ko check karega ki f1
//name ka function h ya nhi agar hoga toh use bind kr degA.Hence yaha A class
//wala f1 function chal jayega.
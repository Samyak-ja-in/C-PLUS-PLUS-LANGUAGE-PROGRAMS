#include<conio.h>
#include<iostream.h>
class B
{
public:
int p,q;
void show()
{cout<<"\np="<<p;
cout<<"\nq="<<q;}
};
class D:public B
{
public:
int r,s,q;
void show()
{cout<<"\nr="<<r;
cout<<"\ns="<<s;
cout<<"\nq="<<q;}
};
void main()
{
clrscr();
B b;
D d;
B *bptr;
bptr=&b;
bptr->p=100;
bptr->q=200;
bptr->show();
bptr=&d;
bptr->p=300;  //yaha d object ke liye q toh not defined h hence garbage value
//bptr->r=600; //na ki 200 kyuki wo 200 toh b object ke liye h d k liue nhi
bptr->show();
D *dptr;
dptr=&d;
dptr->r=400;
dptr->s=500;  //yaha d obj ke loye q defined hi nhi h hence garbage value
dptr->show();
dptr->q=600;
dptr->show();
//bptr->s=700;
bptr=&b;    //points ro object B aur B k liye p=100 and q=200 h
bptr->show();
getch();
}
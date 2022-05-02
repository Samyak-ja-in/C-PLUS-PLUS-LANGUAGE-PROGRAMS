#include<conio.h>
#include<iostream.h>
class complex
{
private:
int a,b;
public:
complex()                    //defaut constructor
{cout<<"hello samyak";}
complex(int x)           //parametric constructor
{
a=x;
}
complex(int x,int y)  //parametric constructor
{a=x; b=y;}
complex(complex &c)  //copy constructor
{ a=c.a;b=c.b;cout<<"\n hello";}
void showdata()
{                           //program to show data of a,b as called by objects
cout<<"a="<<a<<"\nb="<<b;
}
};
void main()
{
clrscr();
complex c1;                         //DOUBT
cout<<"\nforc1";
c1.showdata();     //agar humne copy constructor ko comment bana diya toh
complex c2=1;   //c4.showdata() ka answer c3.showdata se same kese aa rha h
cout<<"\n for c2";    //garbage value aani chahiye thi na
c2.showdata();        //kyuki compiler copy constructor khud banayega aur
complex c3=complex(2,3);//usme koi coding bhi nhi hogi
cout<<"\nfor c3";
c3.showdata();
complex c4(c3);
cout<<"\nfor c4";
c4.showdata();
getch();
}

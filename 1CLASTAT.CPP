#include<iostream.h>
#include<conio.h>
class account
{
private:
float balance;
static float roi;
public:
void setbalance()
{
float b;
cout<<"enter balance";
cin>>b;
balance=b;
}
void setroi()
{
cout<<"\nenter roi";
cin>>roi;
}
void showdata()
{
cout<<"\nbalance="<<balance;
cout<<"\nroi="<<roi;
}
static float showroi()
{
cout<<"roi="<<roi;
return 0;
}
};
float account::roi=7.5;
void main()
{
clrscr();
account a1,a2;
account::showroi();
a1.showroi();
a1.setbalance();
a1.setroi();
a2.setbalance();
a2.setroi();
a1.showdata();
a2.showdata();
getch();
}


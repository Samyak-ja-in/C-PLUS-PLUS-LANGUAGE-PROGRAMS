//this pointer can return object it points to.
//comparison between age of three persons.
#include<stdio.h>
#include<conio.h>
#include<iostream.h>
class person
{
int age;
char name[20];
public:
void getdata()
{cout<<"\nenter name and age of the person";
cin>>name>>age;}
void showdata()
{cout<<"\nname="<<name<<"\tage="<<age;}
person greater(person x)
{if(this->age>x.age)
return *this;
else             //this pointer returning object it points to
return x;}
};
void main()
{person p1;
person p2;
person p3;
p1.getdata();
p2.getdata();
p3.getdata();
person Q=p1.greater(p2);
Q=Q.greater(p3);
cout<<"eldest person is";
Q.showdata();
getch();
}
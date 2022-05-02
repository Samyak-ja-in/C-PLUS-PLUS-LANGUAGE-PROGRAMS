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
else
return x;}
};
void main()
{
clrscr();
int n=0,i=0;
cout<<"\nenter number of persons you want to compare";
cin>>n;
/*if(n==1)          //try if only one person is input use goto statement.
{cout<<"\nonly one person's age cant be compared try again";
goto end;}*/
person *p=new person[n];
for(i=0;i<n;i++)
{(*(p+i)).getdata();}
person Q=(*p).greater(*(p+1));//parentheses lagana jaroori
for(i=2;i<n;i++)
{Q=Q.greater(*(p+i));}
/*person Q=(*(p));
for(i=1;i<n;i++)         //Can be done by commented also;
Q=Q.greater(*(p+i));*/
Q.showdata();
/*end:*/
/*for(i=0;i<n;i++)
{
*p[i]= new person;
(*p[i]).getdata();
}                                   //can't be done by commented method.
person Q=(*p[0]).greater(*p[1]);
for(i=2;i<n;i++)
{person Q=Q.greater(*p[i]);}
Q.showdata(); */
getch();
}













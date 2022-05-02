#include<conio.h>
#include<stdio.h>
#include<iostream.h>
class student
{
double rollno;
char name[30];
public:
void getdata()
{
 cout<<"\n enter rollno and name of student";
 cin>>rollno;
 scanf("%s",&name);
}
void showdata()
{
cout<<"\n entered rollno is="<<rollno<<"\nentered name is="<<name;
}
};
void main()
{
clrscr();
int n;
int i=0;
student *p[10];   //array of object pointers
cout<<"\nenter number of students";
cin>>n;
while(i<n)
{
p[i]=new student;
(*p[i]).getdata();  //p[i]->getdata();
i++;
}
for(i=0;i<n;i++)
p[i]->showdata();
/*{(*p[i]).showdata();}*/
/*p->getdata();
p->showdata();*/
getch();
}
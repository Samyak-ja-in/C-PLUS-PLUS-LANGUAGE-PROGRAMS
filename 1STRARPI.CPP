#include<conio.h>
#include<iostream.h>
#include<stdio.h>
void main()
{
clrscr();
int i;
char *name[3];
char p[3];
/*char *name[3]={"sam","har","san"};*/
cout<<"\n enter three names";
for(i=0;i<3;i++)
{
 scanf("%s",&p[i]);
 *name[i]=p[i];
}
for(i=0;i<3;i++)
{
cout<<"\n";
cout<<"\n name at position "<<i<<" is:"<<name[i];//this prints full names
cout<<"\nusing derefrencing operator at "<<i<<" we get:"<<*name[i];//1stletter
cout<<"\nusing address of operator at "<<i<<" we get:"<<&name[i];//garbagevalue
}
getch();
}
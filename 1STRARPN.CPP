#include<conio.h>
#include<iostream.h>
#include<stdio.h>
#include<string.h>
void main()
{
clrscr();
int i,j;
char temp[100];
//char *name[3][100];
//char p[3][100];
char *name[3]={"sam","har","san"};
while(i<3)
{
j=i+1;
if((strcmp(*name[i],*name[j]))>0)
{
strcpy(temp,*name[j]);
strcpy(*name[j],*name[i]);
strcpy(*name[i],temp);
}
}
cout<<"\n sorted string is";
for(i=0;i<3;i++)
cout<<*name[i];
/*
cout<<"\n enter three names";
for(i=0;i<3;i++)
{
 for(j=0;j<1;j++)
 {
  scanf("%s",&p[i][j]);
  name[i][j]=&p[i][j];
 }
}
for(i=0;i<3;i++)
{
 for(j=0;j<1;j++)
 {
   cout<<"\n";
   cout<<"\n name at position "<<i<<" is:"<<name[i][j];//this prints full names
   cout<<"\nusing derefrencing operator at "<<i<<" we get:"<<*name[i][j];//1stletter
   cout<<"\nusing address of operator at "<<i<<" we get:"<<&name[i][j];//garbagevalue
 }
}*/
getch();
}
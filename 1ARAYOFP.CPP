#include<conio.h>
#include<iostream.h>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
void main()
{
char *leisure[4]={"books","television","sports","movies"};
int i=0;
char str[20];
cout<<"enter your leisure";
cin>>str;
for(i=0;i<4;i++)
{
if(strcmp(str , *leisure[i]))
{
cout<<"\nyour leisure is available here";
}
else
{
continue;
}
}
if(i==4)
{
cout<<"\nyour leisure not available here";
}
getch();
}

//accessing strings using pointers and arrays
#include<conio.h>
#include<iostream.h>
#include<string.h>
void main()
{
clrscr();
int i;
char name[20];
cout<<"enter your name";
cin>>name;
int len;
len=strlen(name);       //doe'snt count null character in string length.
cout<<"\nlength of entered name is"<<len;
char *p;
p=&name[0];
cout<<"\np="<<p;//gives whole entered string as output.
cout<<"\n*p="<<*p;
cout<<"\nreversed string is";
for(i=len-1;i>=0;i--)
{
 cout<<*(p+i);
}
getch();
}
#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void main()
{
void swap(int *,int*);
int i,j;
int *a,*b;
cin>>i>>j;
a=&i;
b=&j;
swap(a,b);
//cout<<*a<<*b;
cout<<i<<j;
getch();
}
void swap(int *a,int *b)
{
int t;
t=*b;
*b=*a;
*a=t;
}

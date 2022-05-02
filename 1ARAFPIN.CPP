//array of integer pointers.
#include<conio.h>
#include<iostream.h>
#include<stdio.h>
void main()
{
clrscr();
int i,a[100],*p[100],n;
cout<<"enter number of elements in array";
cin>>n;
cout<<"\nenter elements of array";
for(i=0;i<n;i++)
{
 cin>>a[i];
 p[i]=&a[i];
}
cout<<"\n entered array is";
cout<<"\nindex i\t a[i]\t &a[i]\n";
for(i=0;i<n;i++)
{
 cout<<i<<"\t";
 cout<<*p[i]<<"\t";
 printf("%d",p[i]);
 cout<<"\n";
}
getch();
}
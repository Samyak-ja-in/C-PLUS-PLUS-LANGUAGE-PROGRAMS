#include<stdio.h>
#include<conio.h>
#include<iostream.h>
void main()
{
int n,i,j,k,count=0;
cout<<"enter any number";
cin>>n;
while(n>0)
{
 count++;
 n=n/10;
}
cout<<"total number of terms in given number is"<<count;
getch();
}

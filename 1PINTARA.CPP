#include<conio.h>
#include<iostream.h>
#include<stdio.h>
void main()
{
clrscr();  //pointer me 1 jodne pr next address ko point krta h.
int a[100];
int *p,n;
int i;
cout<<"enter number of elements in array";
cin>>n;
cout<<"\nenter elements of array";
for(i=0;i<n;i++)
cin>>a[i];
p=&a[0];
cout<<"\na[1]="<<(*p+1);
i=0;
cout<<"\nentered elements of array are:";
cout<<"\nvalue\t address";
while(i<n)
{
cout<<"\n";	     //here we cant make i as floating point value
cout<<*(p+i);
printf("\t%d",p+i); //here p+i gives address
i++;
}
getch();
}

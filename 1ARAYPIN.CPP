#include<conio.h>
#include<iostream.h>
void main()
{
int a[5];
int *b[5];
int i,*p,n;
cout<<"enter number of elements in array";
cin>>n;
cout<<"enter elements of array";
for(i=0;i<n;i++)
{
cin>>a[i];
b[i]=&a[i];
}
//p=a;
cout<<"\naddress of a[0]="<<b[0];
//cout<<"\naddress by pointer of a[0]="<<p;
//p++;
cout<<"\naddress of a[1]="<<b[1];
//cout<<"\naddress by pointer variable of a[1]="<<p;
getch();
}
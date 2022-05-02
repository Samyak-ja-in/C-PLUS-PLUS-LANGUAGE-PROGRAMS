#include<conio.h>
#include<iostream.h>
#include<stdio.h>
void main()
{            //+ has higher precedence then *;
 clrscr();
 int a[125];
 int i,n;
 int *p=a;//is equivavelent to *p=a[0]
 cout<<"\n address of a[0]="<<p;
 cout<<"\n enter number of elements of array";
 cin>>n;
 cout<<"\nenter elements of array";
 for(i=0;i<n;i++)
  cin>>a[i];
 cout<<"\n a[i]\t*(p+i)\t &a[i]\n";
 for(i=0;i<n;i++)
 {
  cout<<a[i];
  cout<<"\t";
  cout<<*(p+i);
  cout<<"\t";
  printf("%d",&a[i]);
  cout<<"\n";
 }
/**p=a[0];//if we put only a here
cout<<"\n address of a[0]="<<p;
cout<<"\n elements are";//it will give a error that cant convert int to int*
cout<<"\n a[i]\t*(p+i)\n";
for(i=0;i<5;i++)
{
 cout<< a[i];
 cout<<"\t";
 cout<<*p+i;
 cout<<"\n";
} */
getch();
}







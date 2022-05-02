#include<iostream.h>
#include<conio.h>
void main()
{
 int a[100];
 int i,j,p,n;
 cout<<"enter number of elements in array";
 cin>>n;
 cout<<"\n enter elements of array";
 for(i=0;i<n;i++)
  cin>>a[i];
 for(i=0;i<n;i++)
 {
 for(j=i+1;j<n;j++)
 {
  if(a[i]<a[j])
   {
    p=a[i];
    a[i]=a[j];
    a[j]=p;
   }
 }
 }
 cout<<"\n array in decending order is";
 for(i=0;i<n;i++)
 cout<<a[i]<<"\n";
cout<<"\n frequencing process is onn";
for(i=0;i<n;i++)
{
 if(a[i]=a[i+1])
 count++;
getch();
}


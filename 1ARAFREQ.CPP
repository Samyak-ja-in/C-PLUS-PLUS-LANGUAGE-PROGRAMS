#include<conio.h>
#include<iostream.h>
void main()
{int i,j,a[100],b[100],n,c,p=0,q;
cout<<"enter number of elements of array";
cin>>n;
cout<<"enter elements of array";
for(i=0;i<n;i++)
cin>>a[i];
for(i=0;i<n;i++)
{
if(a[i]!=(-1))
{
c=1;
for(j=i+1;j<n;j++)
{
if(a[j]!=-1)
{
if(a[i]==a[j])
{
c=c+1;
a[j]=-1;
}
}
}
b[p]=c;
p=p+1;
}
}
q=0;
for(i=0;i<n;i++)
{
if(a[i]!=-1)
{
cout<<a[i]<<"is repeated"<<b[q]<<"times\n";
q++;
}
}
getch();
}
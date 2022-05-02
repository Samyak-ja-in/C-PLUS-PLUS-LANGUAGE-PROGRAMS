//frequency of digits in a number upto 5 digit number.
#include<conio.h>
#include<iostream.h>
void main()
{
clrscr();
int i=0,rem,j,a[100],b[100],n,c,p=0,q;
int z;
cout<<"enter the number under 5 digits";
cin>>z;
n=0;
while(z>0)
{
rem=z%10;
a[i]=rem;
z=z/10;
n++;
i++;
}
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
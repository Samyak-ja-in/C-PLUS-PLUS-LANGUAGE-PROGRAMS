#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,k,n,o,p,h,q;
int l=0,z=0;
int a[100];
int b[100];
int c[100];
int d[100];
int e[100];
printf("enternumber of elements in 1st array");
scanf("%d",&n);
printf("enter array");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("enter number of elements of 2 array");
scanf("%d",&o);
printf("enter array");
for(j=0;j<o;j++)
scanf("%d",&b[j]);
printf("enter number of elements in 3fd array");
scanf("%d",&p);
printf("enter array");
for(k=0;k<p;k++)
scanf("%d",&c[k]);
for(i=0;i<n;i++)
{
for(j=0;j<o;j++)
{
if(a[i]==b[j])
{
d[l]=a[i];
l++;
}
}
}
for(q=0;q<l;q++)
{
for(k=0;k<p;k++)
{
if(c[k]==d[q])
{
e[z]=d[q];
z++;
}
}
}
printf("common elemsts are");
for(h=0;h<z;h++)
printf("\n%d",e[h]);
getch();
}






#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<math.h>
int digit(int);
int arm(int,int);
void main()
{
 clrscr();
 int n,i,j;
 int p,sum;
 cout<<"enter number";
 cin>>n;
 i=n;
 p=digit(n);
 sum=arm(p,n);
 if(sum==i)
 cout<<i<<" is armstrong number";
 else
 cout<<i<<" isn't armstrong number";
 getch();
}
int digit(int d)
{ int count=0;
 while(d>0)
 {
  d=d/10;
  count++;
 }
return(count);
}
int arm(int c,int z)
{
 int sum=0;
 while(z>0)
 {int t;
   t=z%10;
   sum=sum+pow(t,c);
   z=z/10;
 }
 return(sum);
}












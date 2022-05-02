#include<iostream.h>
#include<string.h>
#include<conio.h>
#include<stdio.h>
void main()
{
 char str[50][5];
 int i,j;
 char temp[100];
 char *p[50];
 int n;
 cout<<"\n enter number of name u want to enter";
 cin>>n;
 cout<<"ENTER NAMES";
 for(i=0;i<n;i++)
 {
  for(j=0;j<1;j++)
  {
   scanf("%s",&str[i][j]);
   //p[i]=&str[i][j];
  }
 }
 getch();
 }
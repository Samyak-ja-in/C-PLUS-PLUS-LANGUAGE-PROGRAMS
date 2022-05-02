#include<conio.h>
#include<iostream.h>
#include<string.h>
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
   p[i]=&str[i][j];
  }
 }
 /*for(i=0;i<n;i++)
 {
  for(j=0;j<1;j++)
  {
   if(strcmp(str[i][j],str[i+1][j])>0);
   {
    strcpy(temp,str[i+1][j]);
    strcpy(str[i+1][j],str[i][j]);
    strcpy(str[i][j],temp);
   }
  }
 }
 cout<<"\n sorted string is";
 for(i=0;i<n;i++)
 {
  for(j=0;j<1;j++)
  {
   cout>>str[i][j];
  }
 }
 getch();
} */
i=0;
 while(i<n)
 {
  if(strcmp(*p[i],*p[i+1])>0);
  {
   strcpy(temp,*p[i+1]);
   strcpy(*p[i+1],*p[i]);
   strcpy(*p[i],temp);
  }
  i++;
 }
 cout<<"sorted string is";
 /*for(i=0;i<n;i++)
 {
  for(j=0;j<1;j++)
  {
   cout>>str[i][j];
  }
 }  */
 for(i=0;i<n;i++)
 cout<<*(p+i)<<"\n";
 getch();
 }


#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<string.h>
void main()
{
int i,j,n;
char str[20][100];
char temp[100];
char *p[100];
cout<<"enter number of names you want to enter";
cin>>n;
cout<<"enter names";
for(i=0;i<n;i++)
{j=0;
scanf("%s",&str[i][j]);
p[i]=&str[i][j];
}

/*for(i=0;i<n;i++)
{j=0;
if((strcmp(str[i][j],str[i+1][j]))>0)
{
strcpy(temp,str[i][j]);
strcpy(str[i][j],str[i+1][j]);
strcpy(str[i+1][j],temp);
}
}  */
for(i=0;i<n;i++)
{
if((strcmp(*p[i],*p[i+1])));
{
strcpy(temp,*p[i+1]);
strcpy(*p[i+1],*p[i]);
strcpy(*p[i],temp);
}
}
cout<<"\nsorted string is";
for(i=0;i<n;i++)
cout<<*p[i];
getch();
}
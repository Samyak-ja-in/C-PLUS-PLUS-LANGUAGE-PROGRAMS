//CHARACTER POINTERS//LEISURE PERSUIT.
#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
 clrscr();
 int i=0;
 char str[8];
 char *name[4]={"books","television","sports","computer"};
 cout<<"\n\n\n\nEnter your favourite leisure persuit:";
 cin>>str;
 //cout<<name[2];
 for(i=0;i<4;i++)
 {
      if(!(strcmp(str,*(name+i))))
      {
      cout<<"\n\nYour favourite pursuit "<<" is available here";
      break;
      }
 }
 //cout<<"\n i="<<i;
 if(i==4)
  cout<<"\n\nYour favourite "<<"not available here";
getch();
}
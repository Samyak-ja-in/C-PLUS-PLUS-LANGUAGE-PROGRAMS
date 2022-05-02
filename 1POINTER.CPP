//understanding basic pointers.
#include<conio.h>
#include<iostream.h>
void main()
{
clrscr();
int a,*ptr1,**ptr2;
cout<<"enter integral value of a";
cin>>a;
ptr1=&a;
cout<<"\naddress of a is="<<ptr1;
cout<<"\n value of a is="<<*ptr1;
ptr2=&ptr1;
cout<<"\naddress of pointer 1="<<ptr2;
ptr1=ptr1+2;
*ptr1=*ptr1+3;
/*cout<<"\naddress of a="<<ptr1; */
cout<<"\n new value of a"<<*ptr1;
/*cout<<"\naddress of ptr1="<<ptr2;   */
getch();
}

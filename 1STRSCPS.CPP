#include<conio.h>
#include<iostream.h>
struct book
{
char name[30];
int pages;
double price;
};
void display(book);
book input();
void main()
{
clrscr();
book b1=input();
display(b1);
getch();
}
book input()
{
book b;
cout<<"enter book name,number of pages,price of book";
cin>>b.name>>b.pages>>b.price;
return(b);
}
void display(book b)
{
cout<<"entered book data is\n";
cout<<"name="<<b.name<<"\n"<<"PAGES="<<b.pages<<"\n"<<"price="<<b.price;
}
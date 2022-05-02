//Using constructors in file handling
#include<fstream.h>
#include<conio.h>
#include<iostream.h>
void main()
{
char name[20];
float price;
ofstream fout("Book.txt");
cout<<"Enter Book name ";
cin.getline(name,20);
cout<<"Enter price ";
cin>>price;
fout<<"Book name ";
fout<<name;
fout<<"\n";
fout<<"Book price ";
fout<<price;
fout.close();
cout<<"\n Closed file now reading file\n";
ifstream fin("Book.txt");
char ch;
ch=fin.get();
while(!fin.eof())
{
cout<<ch;
ch=fin.get();
}
fin.close();
getch();
}

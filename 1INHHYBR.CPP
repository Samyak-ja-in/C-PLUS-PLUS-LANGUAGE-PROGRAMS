#include<conio.h>
#include<iostream.h>
#include<stdio.h>
class student
{
private:               //s,m example shows thta private members arent inherited
double r;
char n[20];
public:
void setname()
{
cout<<"enter student name";
scanf("%s",&n);
}
void setrollno()
{
cout<<"enter roll no";
cin>>r;
}
void showrollno()
{
cout<<"\nstudent's roll no is";
cout<<r;
}
void showname()
{
cout<<"\nstudent name is";
printf("%s",n);
}
};
class test:public student
{
private:
double m;
protected:
double s;
public:
/*double gets()  //protected member accessible by same class member function
{return s;}*/
void setmarks()
{
cout<<"\nenter science and maths marks";
cin>>s>>m;
}
void showmarks()
{
cout<<"\nscience="<<s<<"\nmaths="<<m;
}
double totalmarks()
{
double z;
z=s+m;
return(z);
}
};
class sports
{
private:
double h,c;
public:
void setscore()
{
cout<<"\nenter score of hockey and cricket of student";
cin>>h>>c;
}
void showscore()
{
cout<<"\nhockey score="<<h<<"\ncricket score="<<c;
}
double totalscore()
{
double y;
y=h+c;
return(y);
}
};
class result: public test, public sports
{
private:
double t;
public:
/*double getm()     //yaha m ki value inherit hui hi nhi kyuki private toh
{return(m);} */     //variables inherit nhi hote m test class me private bana
double gets()     //rakha h toh ye error dega par s protected member h
{                 //toh s inherit ho jayega result class ke protected part me
return(s);        //s variable test class ke member function se accessible
}                //hoga ya phir koi class jo ki test class se immediately
void total()      //derive hui h us class ke member function se
{
t=totalscore()+totalmarks();
cout<<"\ntotal="<<t;
}
};
class C:public result
{
public:
double gets()
{return s;}
};
void main()
{
clrscr();
result R;
R.setname();
R.setrollno();
R.setmarks();
R.setscore();
R.showname();
R.showmarks();
R.showscore();
R.total();
cout<<"\n science marks"<<R.gets();
/*cout<<"\n"<<R.getm(); */
C obj;
cout<<"\ngarbage value"<<obj.gets();   //gives garbage value kyuki protected immediately
getch();                 //derived class me se hi access ho skta h
}

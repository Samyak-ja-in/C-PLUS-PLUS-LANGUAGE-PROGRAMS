#include<conio.h>
#include<iostream.h>
class time
{
public:
int hours,minutes;            //as class members is public
			  //hence can be accessed by add function
void settime()
{
cout<<"enter time hours and minutes";
cin>>hours>>minutes;
}
void showtime()
{
cout<<"Addition of time is=";
cout<<"\nhours="<<hours<<"\nminutes="<<minutes;
}
};
time add(time a,time b)
{                                //add function is a global function.
time temp;
temp.minutes=a.minutes+b.minutes;
temp.hours=a.hours+b.hours+(temp.minutes)/60;
temp.minutes=temp.minutes%60;
return(temp);
}
void main()
{
clrscr();
time t1,t2;
time t3;
t1.settime();
t2.settime();
t3=add(t1,t2);
t3.showtime();
getch();
}
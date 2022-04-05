//Scope Resolution Operator
#include<iostream.h>
#include<conio.h>
class Student
{
	private:
		int id;
		char name[20];
	public:
		void getInfo();
		void showInfo()
		{
			cout<<"\nID:"<<id;
			cout<<"\nName:"<<name;
		}
};
void Student::getInfo()
{
	cout<<"\nEnter the ID and Name:";
	cin>>id>>name;
}
class Teacher
{
	private:
		int id;
		char name[20];
	public:
		void getInfo();
		void showInfo()
		{
			cout<<"\nID:"<<id;
			cout<<"\nName:"<<name;
		}
};
void Teacher::getInfo()
{
	cout<<"\nEnter the ID and Name:";
	cin>>id>>name;
}
void main()
{
	clrscr();
	Student S;
	Teacher T;
	S.getInfo();
	T.getInfo();
	S.showInfo();
	T.showInfo();
	getch();
}

























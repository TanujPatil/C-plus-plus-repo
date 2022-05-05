#include<iostream.h>
#include<conio.h>
class Student
{
	public:
		int id;
		char name[20];
		void setStudent()
		{
			cout<<"\nEnter ID And NAME";
			cin>>id>>name;
		}
};
class Internal: public Student
{
	private:
		int im1,im2;
	public:
		void setInternal()
		{
			cout<<"\nEnter Internal Marks in M1 and M2:=";
			cin>>im1>>im2;
		}
		void getInternal()
		{
			cout<<"\nID:="<<id;
			cout<<"\nNAME:="<<name;
			cout<<"\nInternal Mark Of M1:="<<im1;
			cout<<"\nInternal Mark Of M2:="<<im2;
		}
};
class External: public Student
{
	private:
		int em1,em2;
	public:
		void setExternal()
		{
			cout<<"\nEnter External Marks in M1 and M2:=";
			cin>>em1>>em2;
		};
		void getExternal()
		{
			cout<<"\nID:="<<id;
			cout<<"\nNAME:="<<name;
			cout<<"\nEnternal Mark of M1:="<<em1;
			cout<<"\nExternal Mark of M2:="<<em2;
		}
};
void main()
{
	clrscr();
	Internal I;
	External E;
	I.setStudent();
	I.setInternal();
	E.setStudent();
	E.setExternal();
	clrscr();
	I.getInternal();
	E.getExternal();
	getch();
}
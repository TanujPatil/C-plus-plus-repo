#include<iostream.h>
#include<conio.h>

class Student
{
	public:
		int id;
		char name[20];

		void setStudent()
		{
			cout<<"\nEnter Student ID and NAME:";
			cin>>id>>name;
		}
};

class Result : public Student
{
	private:
		float perc;
	public:
		setPerc()
		{
			cout<<"\nEnter Pecentage:";
			cin>>perc;
		}
		getResult()
		{
			cout<<"\nID:="<<id;
			cout<<"\nNAME:="<<name;
			cout<<"\nPERCENTAGE:="<<perc;
		}
};

void main()
{
	clrscr();
	Result R;
	R.setStudent();
	R.setPerc();
	R.getResult();
	getch();
}





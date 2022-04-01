//Program to get Sum of all Students Fees
#include<iostream.h>
#include<conio.h>

class student
{
	private:
	int rollno;
	char name[20];
	float fees;
	static float total;

	public:
	void setstudent()
	{
		cout<<"\nEnter Rollno,Name,Fees=";
		cin>>rollno>>name>>fees;
		total=total+fees;
	}

	void getstudent()
	{
		cout<<"\tRoll no:"<<rollno;
		cout<<"\tName:"<<name;
		cout<<"\tFees:"<<fees;
	}
	static void gettotal()
	{
		cout<<"Total:"<<total;
	}
};
	float student::total=0;

void main()
{
	clrscr();
	student s1,s2,s3;
	s1.setstudent();
	s2.setstudent();
	s3.setstudent();
	s1.getstudent();
	s2.getstudent();
	s3.getstudent();
	student::gettotal();
	getch();
}













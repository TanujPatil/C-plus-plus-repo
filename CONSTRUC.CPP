#include<iostream.h>
#include<conio.h>
class student
{
	private:
		int rollno,id;

	public:

		void getInfo()
		{
			cout<<"\nRoll No:"<<rollno;
			cout<<"\nId:"<<id;
		}
		student()
		{
			rollno=id=0;
		}
		student(int a,int b)
		{
			rollno=a;
			id=b;
		}

};
void main()
{
	student S1,S2(1,354),S3(2,315);
	clrscr();

	S1.getInfo();
	S2.getInfo();
	S3.getInfo();
	getch();
}
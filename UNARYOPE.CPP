
#include<iostream.h>
#include<conio.h>

class sample
{
	private:
		int a,b,c;
	public:
		sample()
		{
			a=b=c=0;
		}
		sample(int x,int y,int z)
		{
			a=x;
			b=y;
			c=z;
		}
		void showData()
		{
			cout<<"\nA:"<<a;
			cout<<"\nB:"<<b;
			cout<<"\nC:"<<c;
		}
		void operator -()
		{
			a=-a;
			b=-b;
			c=-c;
		}
};
void main()
{
	clrscr();

	sample s1(10,20,30);
	cout<<"\nBefore Using Operator Overloading::";
	s1.showData();
	-s1;
	cout<<"\nAfter Using Operator Overloading::";
	s1.showData();

	getch();
}
























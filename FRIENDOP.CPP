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
		friend void operator -(sample & T);
};
void operator -(sample & T)
{
	T.a=-T.a;
	T.b=-T.b;
	T.c=-T.c;
}
void main()
{
	clrscr();

	sample s1(10,-20,30);
	cout<<"\nBefore Using Operator Overloading::";
	s1.showData();
	-s1;
	cout<<"\nAfter Using Operator Overloading::";
	s1.showData();

	getch();
}
























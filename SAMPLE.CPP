#include<iostream.h>
#include<conio.h>

class Sample
{
	private:
		int a;
	public:
		Sample()
		{
			a=0;
		}
		Sample(int x)
		{
			a=x;
		}
		showData()
		{
			cout<<"\nA:="<<a;
		}
		Sample operator ++()
		{
			Sample temp;
		       temp.a=++a;
			return temp;
		}


};
void main()
{
	clrscr();
	Sample s1(2),s2;
	s1.showData();
	s2=++s1;
	s2.showData();
	getch();
}



#include<iostream.h>
#include<conio.h>

class ComplexNo
{
	private:
		int x,y;
	public:
		ComplexNo()
		{
			x=y=0;
		}
		ComplexNo(int a,int b)
		{
			x=a;
			y=b;
		}
		void showData()
		{
			cout<<"\n"<<x<<"+i"<<y;
		}

		friend ComplexNo operator +(ComplexNo & t,ComplexNo & t2);

};

ComplexNo operator +(ComplexNo & t1, ComplexNo & t2)
{
	ComplexNo temp;
	temp.x=t1.x+t2.x;
	temp.y=t1.y+t2.y;
	return temp;
}

void main()
{
	clrscr();
	ComplexNo c1(2,4);
	ComplexNo c2(4,2);

	cout<<"\nFirst Complex Number:";
	c1.showData();
	cout<<"\nSecond Complex Number:";
	c2.showData();

	ComplexNo c3;
	c3=c1+c2;
	cout<<"\nComplex Number After Adding First and Second:";
	c3.showData();

	getch();
}















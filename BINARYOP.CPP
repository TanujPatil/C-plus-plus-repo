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

		ComplexNo operator +(ComplexNo & t)
		{
			ComplexNo temp;
			temp.x = x+t.x;
			temp.y = y+t.y;
			return temp;
		}

};
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















#include<iostream.h>
#include<conio.h>

void add(int a, int b)
{
	cout<<"\nAddition of Two Int:"<<(a+b);
}

void add(float m, float n)
{
	cout<<"\nAddition of Two Float:"<<(m+n);
}

void add(int a, float m)
{
	cout<<"\nAddition of int and float:"<<(a+m);
}

void add(float n, int b)
{
	cout<<"\nAddition of float and int:"<<(n+b);
}

void main()
{
	int a=10,b=5;
	float m=8.4,n=4.3;
	clrscr();

	add(a,b);
	add(m,n);
	add(a,m);
	add(n,b);

	getch();
}

#include<iostream.h>
#include<conio.h>

class Laptop
{
	private:
		char model[50];
		char company[20];
		float price;

	public:
		void setInfo();
		void showInfo();
};
void Laptop::setInfo()
{
	cout<<"\nEnter Model Name:";
	cin>>model;
	cout<<"\nEnter Company Name:";
	cin>>company;
	cout<<"\nEnter Price:";
	cin>>price;
}
void Laptop::showInfo()
{
	cout<<"\n"<<model<<"\t"<<company<<"\t\t"<<price;
}
void main()
{
	clrscr();
	Laptop L1,L2,L3;
	L1.setInfo();
	L2.setInfo();
	L3.setInfo();
	cout<<"\nMODEL:\tCOMPANY:\tPRICE:";
	L1.showInfo();
	L2.showInfo();
	L3.showInfo();
	getch();
}




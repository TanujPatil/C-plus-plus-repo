#include<iostream.h>
#include<conio.h>
#include<fstream.h>
void main()
{
	int id;
	char name[20];
	float fees;
	ofstream myfile;
	clrscr();
	myfile.open("Test1.txt",ios::in);
	cout<<"\nEnter the Id, Name, and Fees:=";
	cin>>id>>name>>fees;

	myfile<<id<<"\n";
	myfile<<name<<"\n";
	myfile<<fees;

	myfile.close();
	getch();
}
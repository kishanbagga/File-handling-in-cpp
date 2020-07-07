#include<iostream.h>
#include<fstream.h>
#include<conio.h>

void main()
{
	clrscr();
	ifstream fin();
	char ch;
	ch=fin.get();
	while(!fin.eof())
	{
		cout<<ch;
		ch=fin.get();
	}
	
	fin.close();
	getch();
}

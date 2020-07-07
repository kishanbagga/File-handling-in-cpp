#include<iostream.h>
#include<fstream.h>
#include<conio.h>

void main()
{
	ofstream fout;
	fout.open("myfile.dat");
	getch();
	fout<<"Hello";
	getch();
}

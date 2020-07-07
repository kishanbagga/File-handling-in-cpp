#include<iostream.h>
#include<fstream.h>
#include<conio.h>

void main()
{
	ofstream fout;
	fout.open("myfile.dat",ios::app|ios::binary);
	fout.close();
	getch();
}

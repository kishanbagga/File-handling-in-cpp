#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
class Book
{
	private:
		int bookid;
		char title[20];
		float price;
	
	public:
		Book()
		{
			bookid=0;
			strcpy(title,"no title");
			price=0;
		}
		
		void getBookData()
		{
			cout<<"Enter Book details i.e. bookid \t title \t and \t price : ";
			cin>>bookid;
			cin.ignore();
			cin.getline(title,19);
			cin>>price;
		}
		
		void showBookData()
		{
			cout<<bookid<<"\t"<<title<<"\t"<<price<<"\n"<<endl;
		}
		
		int storeBook();
};

int Book::storeBook()
{
	if(price==0 && bookid==0)
	{
		cout<<"\n Book details are not initialized. \n ";
		return 1;
	}
	
	ofstream fout;
	fout.open("file1.dat",ios::app|ios::binary);
	fout.write((char*)this,sizeof(*this));
	fout.close();
	 
	return 0;
}
int main()
{
	Book b1,b2;
	b1.getBookData();
	b1.showBookData();
	b1.storeBook();
	b2.showBookData();
	
	
}


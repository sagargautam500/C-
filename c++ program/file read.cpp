#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char str[50];
	fstream obj;
	obj.open("file.txt",ios::in);
	obj>>str;
	cout<<str;
	obj.close();
	return 0;
	
}

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	char str[50];
	fstream obj;
	obj.open("file.txt",ios::out);
	cout<<"enter data"<<endl;
	cin>>str;
	obj<<str;
	obj.close();
	return 0;
	
}

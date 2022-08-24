#include<iostream>
using namespace std;

template<class T>
T large(T n1,T n2)
{
	return(n1>n2)?n1:n2;
}
int main()
{
	int i1,i2;
	float f1,f2;
	char c1,c2;
	
	cout<<"enter the two numbers"<<endl;
	cin>>i1>>i2;
	cout<<large(i1,i2)<<"is larger value"<<endl;
	cout<<"enter two floating value"<<endl;
	cin>>f1>>f2;
	cout<<large(f1,f2)<<"is larger value"<<endl;
	cout<<"enter two character"<<endl;
	cin>>c1>>c2;
	cout<<large(c1,c2)<<"is larger ASCII value"<<endl;
	return 0;
}

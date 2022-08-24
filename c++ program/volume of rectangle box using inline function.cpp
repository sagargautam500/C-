//WAP to find the volume of reactangle box using inline function.

#include<iostream>
using namespace std;

inline int volume(int l,int b,int h)
{
	//return(l*b*h);
	int vol;
	vol=l*b*h;
	
}

int main()
{
	int a,b,c;
		cout<<"enter the length,breadth abd height"<<endl;
		cin>>a>>b>>c;
		cout<<"the volume of rectangle box is:"<<volume(a,b,c);
		return 0;
}

#include<iostream>
using namespace std;
class complex
{
	private:
		int real,img;
	public:
		complex(int r=0,int i=0)
		{
			real=r;
			img=i;
		}
	friend ostream&operator<<(ostream&out, const complex&c);
	friend istream&operator>>(istream&in,complex&c);
};
ostream&operator<<(ostream&out,const complex&c)
{
	cout<<c.real;
	cout<<"+i"<<c.img;
	return out;
}
istream&operator>>(istream&in,complex&c)
{
	cout<<"enter real part"<<endl;
	in>>c.real;
	cout<<"enter imaginary part"<<endl;
	in>>c.img;
	return in;
}

int main()
{
	complex c1;
	cin>>c1;
	cout<<"the complex object is";
	cout<<c1;
	return 0;
}

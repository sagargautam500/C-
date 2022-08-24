//derive the triangle ans rectangle class from the help of shape class adding necessary attributes and use the classes in main function and display the area of triangle and reactangle..

#include<iostream>
using namespace std;
class shape
{
	protected:
		float b,h,a;
	public:
		void getdata()
		{
			cout<<"enter the breadth and height:"<<endl;
			cin>>b>>h;
			
		}
};

class triangle:public shape
{
	public:
		void getarea()
		{
			a=(b*h)/2;
		}
		void display()
		{
			cout<<"the area of triangle is:"<<a<<endl;
		}
};

class reactangle:public shape
{
	public:
		
			void getarea()
			{
				a=b*h;
			}
			void display()
			{
				cout<<"the area of reactangle is:"<<a<<endl;
			}
		
};

int main()
{
	triangle T;
	reactangle R;
	cout<<"enter the triangle data"<<endl;
	T.getdata();
	cout<<"enter the reactangle data"<<endl;
	R.getdata();
	T.getarea();
	R.getarea();
	T.display();
	R.display();
	return 0;
}



















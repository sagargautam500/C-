#include<iostream>
using namespace std;
class student
{
	int x;
	public:
		virtual void func()=0;
		int getx(){
			return x;
		}
};
class derived:public student
{
	int y;
	public:
		void func(){
		cout<<"the derived class is called";
	}
};
int main(){
derived d;
d.func();
return 0;
}


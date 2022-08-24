#include<iostream>
using namespace std;
class demo
{
	private:
		static int x;
	public:
		static void func()
		{
			cout<<"value of x="<<x;
		}
};
ints demo::x=10;
int main()
{
	demo p;
	p.func();
	return 0;
}

#include<iostream>
using namespace std;
class sagar
{
	private:
		int x;
	protected:
		int y;
	public:
		int z;
	sagar(){
	x=2;
	y=3;
	z=5;
}
};
class gautam:protected sagar
{
	public:
		void show(){
		
	cout<<"x="<<endl;
	cout<<"y="<<y<<endl;
	cout<<"z="<<z<<endl;
}
};
int main()
{
	gautam s;
	s.show();
	return 0;
}



	

	


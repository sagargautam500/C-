#include<iostream>
using namespace std;

class abc
{
	private:
		int x,y;
	public:
		abc()
		{
			x=y=0;
		}
		abc(int a)
		{
			x=y=a;
		}
		abc(int a,int b)
		{
			x=a;
			y=b;
		}
	void show()
	{
	cout<<"x="<<x<<endl;
	cout<<"y="<<y<<endl;
    }
};
int main()
{
abc p;
abc q(2);
abc r(3,4);
p.show();
q.show();
r.show();
	return 0;
}
	

#include<iostream>
using namespace std;
class sagar
{
	
		public:
			int x,y;
			 void printdata(int a, int b)
		    {
		    	x=a;
		    	y=b;
			}
			void showdata()
			{
	        	cout<<"value of x="<<x<<endl;
             	cout<<"value of y="<<y<<endl;
            }

			
};



int main(){
sagar a;
a.printdata(4,4);
a.showdata();
	return 0;
	
}

#include<iostream>
#include<conio.h>

class sagar
{
	private:
		int a;
	public:
		sagar()
		{
			a=0;
			cout<<"inside the constructor";
		}
	   ~sagar()
	   {
	   	cout"the value of a="<<a<<endl;
	   	cout"/ninside the constructor";
	   }
};
int main(){
sagar e;
cout<<"hellow";
return 0;
}

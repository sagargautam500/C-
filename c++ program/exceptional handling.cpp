#include<iostream>
using namespace std;
 
 int main()
 {
 	int x=-1;
 	cout<<"before try"<<endl;
 	try{
 		cout<<"inside try"<<endl;
 		if(x<0)
 		{
 			throw x;
 			cout<<"after throw(never executed)"<<endl;
		 }
	 }
	 catch(int x)
	 {
	 	cout<<"exception caught"<<endl;
	 }
	 cout<<"after catch(will be executed)"<<endl;
	 return 0;
 	
 }

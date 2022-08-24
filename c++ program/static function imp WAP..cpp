#include<iostream>
using namespace std;

class account
{
	public:
		string acc_no;
		int balance;
		static int min_balance;
		//read the data
		void readdata()
		{
			cout<<"enter the account number"<<endl;
			cin>>acc_no;
			cout<<"enter the balance"<<endl;
			cin>>balance;
		}
		//print the data
		void display()
		{
			cout<<"account number="<<acc_no<<endl;
			cout<<"balance="<<balance<<endl;
		}
		
		//read the static data
		void readminbalance()
		{
			cout<<"enter the minimum balance"<<endl;
			cin>>min_balance;
		}
		
		//print the static data
		void disminbalance()
		{
			cout<<"minimum balance="<<min_balance<<endl;
		}
		
};
		//initialize the minimum balance
		int account::min_balance=0;
		
		
		int main()
		{
			account acc[5];
			int i=0;
			
			account::readminbalance();   //read the static data
			cout<<"enter the account"<<endl;//read the account
			for(i=0,i<5,i++)
			{
				acc[i].readdata();
		}
			//print the account 
			cout<<"/n=====account details=====/n";
			for(i=0,i<5,i++)
			{
				acc[i].display();
				acc[i].disminbalance;
			}
			
			return 0;
			
		}
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		



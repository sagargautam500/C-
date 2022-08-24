#include<iostream>
using namespace std;
class sample
{
	private:
		int a,b;
	public:
		void setvalue()
		{
	      a=5;
	      b=6;
	  }
	  friend float mean(sample s);
};
 float mean(sample s);
    {
    	return float mean(s.a+s.b)/2;
	}
 	
 
  int main(){
  
  sample p;
  p.setvalue();
  cout<<"the mean is"<<mean()
  return 0;
}
  

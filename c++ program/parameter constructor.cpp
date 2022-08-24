#include<iostream>
using namespace std;

class point
 {
 	private:
 		int x,y;
 	public:
 		point(int x1,int y1)
 		{
 			x=x1;
 			y=y1;
		 }
	    point(const point&p2)
	    {
	    	x=p2.x;
	    	y=p2.y;
		}
		 
		 int getx()
		 {
		 	return x;
		 }
		 int gety()
		 {
		 	return y;
		 }
 };
 int main()
 {
  point p(4,6);
  p.getx();
  p.gety();
 return 0;
}

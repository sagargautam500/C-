#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    float a,b,c,root1,root2,temp;
    cout<<"Enter the coefficits of quadratic equation "<<endl;
    cin>>a,b,c;
    
    temp = sqrt(b*b-4*a*c);
    root1 = (-b + temp )/(2*a);
    root2 = (-b - temp )/(2*a);
    cout<<"ther roots are"<<root1<<" "<<root2;
}

#include<stdio.h>  
  
#define PI 3.14  
  
int main()  
{  
    float r, area;  
  
    printf("Enter Radius of Circle\n");  
    scanf("%f", &r);  
  
    area = PI * r * r;  
  
    printf("Area of Circle is %f\n", area);  
  
    return 0;  
}  


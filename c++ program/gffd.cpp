//Include the graphics header file
#include<graphics.h>
#include<stdio.h>
#include<conio.h>
 
int main()
{
   //Initialize the variables for the graphics driver and mode
   int gd = DETECT, gm;
   initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

   //Set the color of the object you want to draw. 
   setcolor(BLUE);

   //Draw an object. For this example,drawing a rectangle using the rectangle function
   rectangle(50,50,100,100);

   getch();

   //unloads the graphics drivers
   closegraph();
}

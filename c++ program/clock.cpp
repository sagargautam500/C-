
// program to make a digital clock using graphics
#include <conio.h>
#include <graphics.h>
#include <time.h>
#include <dos.h>
#include <string.h>
 
int main() {
    int gd = DETECT, gm;
    int midx, midy;
    long current_time;
    char timeStr[256];
 
    initgraph(&gd, &gm, "C:\\TC\\BGI");
 
    midx = getmaxx() / 2;
    midy = getmaxy() / 2;
 
    while (!kbhit()) {
        cleardevice();
        setcolor(WHITE);
        setfillstyle(SOLID_FILL, WHITE);
        rectangle(midx - 250, midy - 40, midx + 250, midy + 40);
        floodfill(midx, midy, WHITE);
        current_time = time(NULL);
        strcpy(timeStr, ctime(&current_time));
        setcolor(RED);
        settextjustify(CENTER_TEXT, CENTER_TEXT);
        settextstyle(SANS_SERIF_FONT, HORIZ_DIR, 4);
 
        moveto(midx, midy);
        outtext(timeStr);
        delay(1000);
    }
 
    getch();
    closegraph();
    return 0;
}

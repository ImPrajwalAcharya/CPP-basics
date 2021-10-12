#include<iostream>
#include <graphics.h>

using namespace std;
int main()
{int n;
cin>>n;
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");


    circle(250, 200, n);
    circle(250, 100, n);
    getch();
    closegraph();

    return 0;
}

#include <iostream>
#include <graphics.h>

class A {
public:
    void Aa() {
        int gd = DETECT, gm;
        char c='a';
        initgraph(&gd, &gm, " ");
        line(140, 140, 350, 140);

        setfillstyle(SOLID_FILL, BLUE);
        line(140, 140, 200, 200);
        setcolor(RED);
        line(350, 140, 200, 200);
        getch();

        closegraph();
    }

    void lin() {
        int a = DETECT, b;
        initgraph(&a, &b, "");

        initwindow(500, 500, "COLOR ");
        setfillstyle(SOLID_FILL, BLUE);
        setfillstyle(HATCH_FILL, 1);
        floodfill(50, 50, RED);
        line(140, 140, 350, 140);

        setcolor(YELLOW);
        line(140, 240, 350, 240);
        setcolor(RED);
        line(140, 240, 350, 140);
        setcolor(GREEN);
        line(140, 140, 350, 240);

        getch();
        closegraph();
    }

    void cr() {
        initwindow(500, 500, "ggkgdkg");
        setfillstyle(SOLID_FILL, 7);
        floodfill(20, 20, 7);
        for (int i = 10; i <= 150; i += 10) {
            for (int j = 0; j < 100; j++)
                for (int k = 0; k < 50; k++)
                    setcolor(0);
            circle(200, 200, i);
        }
        getch();
    }

    void col() {
        initwindow(500, 500, "COLOR ");
        setcolor(RED);
        setfillstyle(SOLID_FILL, BLUE);
        setfillstyle(HATCH_FILL, BLUE);
        circle(250, 250, 50);
        floodfill(250, 250, RED);
        getch();
    }
};

int main() {
    A o;
    o.Aa();
    return 0;
}


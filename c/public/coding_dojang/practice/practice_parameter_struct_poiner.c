#include <stdio.h>

struct Point2D
{
    int x;
    int y;
};

void setPoint2D(struct Point2D *p, int x, int y)
{
    p->x=x;
    p->y=y;
}

int main(void)
{
    struct Point2D p1;
    setPoint2D(&p1, 10, 20);

    printf("%d %d\n", p1.x, p1.y);

    return 0;
}

#include <stdio.h>

struct point {
    int x;
    int y;
};

int main(void){
    struct point p1;
    struct point p2;
    struct point p3;

    p1.x = 30;
    p1.y = 40;
    printf("p1 = (%d, %d)\n", p1.x, p1.y);

    printf("input: ");
    scanf("%d", &p2.x);
    scanf("%d", &p2.y);
    printf("p2 = (%d, %d)\n", p2.x, p2.y);

    p3.x = (p1.x + p2.x) / 2;
    p3.y = (p1.y + p2.y) / 2;
    printf("p3 = (%d, %d)\n", p3.x, p3.y);

    return 0;
}
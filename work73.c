#include <stdio.h>

void swap(int *x, int *y){
    int tmp;

    tmp = *x;
    *x = *y;
    *y = tmp;
}

int main(void){
    int a, b;
    int i;

    scanf("%d", &a);
    scanf("%d", &b);

    /* aの方が小さい値になるようにする */
    if (a>b){
        swap(&a, &b);
    }

    /* aからbまでの整数を列挙する */
    for (i=a; i<=b; i++){
        printf("%d ", i);
    }
    printf("\n");

    return 0;
}
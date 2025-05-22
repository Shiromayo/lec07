#include <stdio.h>

/* 2次元座標上の点を表す構造体の定義 */
struct point {
    int x;
    int y;
};

/* print_point関数: 構造体を表示 */
void print_point(struct point p) {
    printf("(%d, %d)\n", p.x, p.y);
}

/* input_point関数: キーボード入力から構造体を作成 */
struct point input_point(void) {
    struct point p;
    scanf("%d %d", &p.x, &p.y);
    return p;
}

int main(void){
    /* struct point型の変数p1とp2を宣言 */
    struct point p1, p2;

    /* p1とp2の座標値をinput_point関数を使って
       キーボードから入力する */
    p1 = input_point();
    p2 = input_point();

    // 条件チェック（順序厳守）
    if (p1.x == p2.x && p1.y == p2.y) printf("同じ点です\n");
    else if (p1.x == p2.x && p1.y == -p2.y) printf("x軸に対して対称です\n");
    else if (p1.x == -p2.x && p1.y == p2.y) printf("y軸に対して対称です\n");
    else if (p1.x == -p2.x && p1.y == -p2.y) printf("原点に対して対称です\n");
    else if (p1.x * p2.y == p2.x * p1.y) printf("原点を通る同一直線上にあります\n");
    else printf("いずれの関係にもありません\n");

    return 0;
}

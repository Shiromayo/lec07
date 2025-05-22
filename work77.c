#include <stdio.h>

/* 2次元座標上の点を表す構造体の定義 */
struct point {
    int x;
    int y;
};

/* get_point関数: xとyから構造体を作成 */
struct point get_point(int x, int y) {
    struct point p;
    p.x = x;
    p.y = y;
    return p;
}

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

/* get_middle_point関数: 2点の中点を計算 */
struct point get_middle_point(struct point a, struct point b) {
    struct point mid;
    mid.x = (a.x + b.x) / 2;
    mid.y = (a.y + b.y) / 2;
    return mid;
}

/*************************************************
* main関数は変更せずに使用すること．
* 指定通りの関数を作成すれば，main関数を以下の状態
* から一切変更せずに正しく動作するはずです．
* ★main関数をよく読んで，どのように関数が使われて
*   いるかをよく確認してください．
**************************************************/
int main(void){
    struct point p1;  /* 定義した構造体型「struct point」は  */
    struct point p2;  /* 型名としてintやdoubleなどと同様に */
    struct point p3;  /* 使うことができる */

    /* 点p1の座標を(30, 40)に設定する */
    p1 = get_point(30, 40);
    printf("p1 = ");
    print_point(p1);

    /* 点p2の座標をキーボードから入力する */
    printf("input: ");
    p2 = input_point();
    printf("p2 = ");
    print_point(p2);

    /* 点p1と点p2の中点の座標を点p3に設定する */
    p3 = get_middle_point(p1, p2);
    printf("p3 = ");
    print_point(p3);

    return 0;
}
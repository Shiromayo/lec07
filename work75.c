#include <stdio.h> 

int main(void){
    char s[64]; // 十分なサイズの配列を宣言
    char *p;

    scanf("%s", s);       //キーボードから文字列を入力

    printf("s = [%s]\n", s);

    p = s;
    printf("p = [%s]\n", p);

    return 0;
}
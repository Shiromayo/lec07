#include <stdio.h>
#define N 64

int main(void){
    char s[N];
    char *p;

    scanf("%s", s);

    printf("s = [%s]\n", s);

    p = s;
    printf("p = [%s]\n", p);

    return 0;
}
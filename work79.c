#include <stdio.h>

struct student {
    char name[64];
    char id[64];
    int credits;
    int grad_flag;
};

void print_student(struct student s) {
    printf("====[%s]====\n", s.name);
    printf("学番: %s\n", s.id);
    printf("単位: %d\n", s.credits);
    printf("卒業: %d\n\n", s.grad_flag);
}

int main(void) {
    int n;
    scanf("%d", &n); // 学生の人数を読み込む

    struct student students[n]; // 学生の配列を宣言

    // 各学生の情報を読み込む
    for (int i = 0; i < n; i++) {
        scanf("%s %s %d %d",
              students[i].name,
              students[i].id,
              &students[i].credits,
              &students[i].grad_flag);
    }

    // 各学生の情報を表示する
    for (int i = 0; i < n; i++) {
        print_student(students[i]);
    }

    return 0;
}
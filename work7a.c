#include <stdio.h>
#include <stdlib.h>

struct goods {
    int id;
    char name[100];
    int unit_price;
};

void print_goods(struct goods g) {
    printf("%d,%s,%d\n", g.id, g.name, g.unit_price);
}

int main(int argc, char *argv[]) {
    // プログラム引数のチェック
    if (argc != 2) {
        printf("エラー: プログラム引数を1つ指定してください\n");
        return 0;
    }

    int min_price = atoi(argv[1]); // プログラム引数を整数に変換
    int n;
    scanf("%d", &n); // 商品の数を読み込む

    struct goods items[n]; // 商品の配列を宣言
    int count = 0; // 条件を満たす商品の数をカウント

    // 各商品の情報を読み込む
    for (int i = 0; i < n; i++) {
        scanf("%d %s %d", &items[i].id, items[i].name, &items[i].unit_price);
    }

    // 条件を満たす商品を表示
    for (int i = 0; i < n; i++) {
        if (items[i].unit_price >= min_price) {
            print_goods(items[i]);
            count++;
        }
    }

    // 出力した商品の数を表示
    printf("%d行出力しました\n\n", count);

    return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void){
    srand((unsigned int)time(NULL));
    int d,deye,i,g = 0,y;//変数宣言
    int l[100];
    printf("ダイズを振ります\n");
    printf("ダイズ数?\n");
    scanf("%d", &d);
    if (d > 100 || d <= 0){//ここで危険な数を弾く
        printf("100以下又は1以上でお願いします\n");
        return 1;
    }
    printf("目の数?\n");
    scanf("%d",&deye);
    if (deye <= 0){//ここで危険な数を弾く
        printf("1以上でお願いします\n");
        return 1;
    }
    printf("%dd%dでダイズを振ります\n",d,deye);
    for ( i = 0; i < d; i++){
        l[i] = rand() % deye + 1;//乱数を配列に代入
    }
    for (i = 0; i < d; i++){
        printf("%d個目のダイズの目:%d\n",i +1,l[i]);
    }
    printf("すべて表示が終わりました\n");
    for (i = 0; i < d; i++){
        g += l[i];//配列のすべての値をgに足す
    }
    printf("出目の合計は:%d\n",g);
    return 0;
}
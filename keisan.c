#include <stdio.h>
int main (void){
    double nyuryoku1;
    double nyuryoku2;
    int mode = 0;
    printf("計算プログラム\n");
    printf("式を入力\n");
    printf("式の1番目の数値を入力\n");
    scanf("%lf", &nyuryoku1);
    printf("式の2番目の数値を入力\n");
    scanf("%lf", &nyuryoku2);
    printf("モードを入力、1は足し算、2は引き算、3は掛け算、4は割り算\n");
    scanf("%d", &mode);
    switch (mode) {
        case 1:
            printf("%f+%f=%f\n", nyuryoku1,nyuryoku2,nyuryoku1 + nyuryoku2);
            break;
        case 2:
            printf("%f-%f=%f\n", nyuryoku1,nyuryoku2,nyuryoku1 - nyuryoku2);
            break;
        case 3:
            printf("%fx%f=%f\n", nyuryoku1,nyuryoku2,nyuryoku1*nyuryoku2);
            break;
        case 4:
            if (nyuryoku2 == 0){
                printf("0では割れません\n");
                break;
            }
            printf("%f÷%f=%f\n", nyuryoku1,nyuryoku2,nyuryoku1/nyuryoku2);
            break;
        default:
            printf("不正な入力\n");
            break;
    }
    return 0;

    
}
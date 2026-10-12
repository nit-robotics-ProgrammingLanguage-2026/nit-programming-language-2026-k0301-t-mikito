#include <stdio.h>

int main(void) {
    /* 課題0301: prinfのカッコの中を記入して、変数iの中身を表示させてください */
    int i;
    scanf("値段を入れてください%d",&i);
    printf("税込み価格は%fです",i*1.1); 
    return 0;
}

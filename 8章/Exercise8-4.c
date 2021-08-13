/***********************
 * 実習8-4
 * 九九表出力プログラム
 * 
 * 作成日 : 8/24.2020
 * ********************/

#include<stdio.h>

int main(){
    int fir;        //〇×△の〇
    int sec;        //〇×△の△

    for(fir=1;fir<=9;++fir){
        for(sec=1;sec<=9;++sec){
            printf("%d",fir*sec);
        }
        printf("\n");
    }

    return 0;
}
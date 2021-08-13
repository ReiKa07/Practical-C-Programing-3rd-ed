/*************************************************************
 * 実習10-1
 * パラメーターが10で割り切れるかの判断をするマクロの作成
 * 割り切れる場合は真（True）、そうでない場合は偽（False）を返す
 * 
 * 作成日 : 8/26.2020
 * ***********************************************************/

#include<stdio.h>
#define MULTIPLE10(x) ((x%10==0)? 1 : 0)    //真の場合は1、偽の場合は0を返すことを 1:0 で表している?

int main(void){

    int value_01=11;      //調査するパラメーター
    int value_02=100;      //調査するパラメーター
    char answer;                

    answer=MULTIPLE10(value_01)? 'T' : 'F';
    printf("is %d multiple 10 ? : %c\n",value_01,answer);

    answer=MULTIPLE10(value_02)? 'T' : 'F';
    printf("is %d multiple 10 ? : %c\n",value_02,answer);

    return 0;
}
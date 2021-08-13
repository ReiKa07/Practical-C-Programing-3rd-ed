/********************************************
 * サンプル
 * scanf関数を避けてfgetsとsscanfを使用する例
 * 
 * 入力した数値を2倍して返す
 * 
 * 作成日 : 8/18
 * ******************************************/

#include<stdio.h>

int main()
{
    char line[100];     /*コンソールからの入力*/
    int value;          /*2倍する値を代入する変数*/

    printf("Please enter a value : ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &value);

    printf("Twice %d is %d\n", value, value * 2);

    return 0;
}
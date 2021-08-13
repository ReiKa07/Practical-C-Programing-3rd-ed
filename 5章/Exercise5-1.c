/***************************************
 * 実習5-1
 * 摂氏を華氏に変換するプログラム
 * 変換の式は以下の通り
 * F = 9/5 C + 32
 * 
 * 作成日 : 8/18
 * ************************************/

#include<stdio.h>

int main()
{
    char line[100];     /*コンソールからの入力*/
    int celsius;     /*入力された摂氏を代入する変数*/
    int fahrenheit;     /*計算した華氏の値を代入する変数*/

    printf("Please celsius :");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &celsius);

    /*摂氏→華氏の変換*/
    fahrenheit = (9 * celsius) / 5 + 32;    /*(9/5)*celsius+32　は不可*/

    printf("摂氏 %d 度の時、華氏 %d 度\n", celsius, fahrenheit);

    return 0;

}
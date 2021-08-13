/*************************************************
 * 実習5-5
 * 時間と分を入力するとその合計を分で返すプログラム
 * 
 * 作成日 : 8/18
 * ***********************************************/

#include<stdio.h>

int main()
{
    char line[100];     /*コンソールからの入力*/
    int h, m;           /*h=hour m=minute*/
    int m_01;           /*時間を分に変換した値を代入*/

    /*時間と分の入力を求める*/
    printf("Please enter hour,minute : ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d,%d", &h, &m);

    /*時間から分に変換*/
    m_01 = h * 60;

    printf("合計は %d 分\n", m_01 + m);

    return 0;
}
/*********************************************************
 * 実習5-6
 * 時間を分で入力すると「〇時間〇分」に変換して返すプログラム
 * 
 * 作成日 : 8/18.2020
 * *******************************************************/

#include<stdio.h>

int main()
{
    char line[100];
    int m_01, m_02, h;      /*m_01は入力された分、m_02は剰余、hは時間を代入する変数*/

    /*入力を求める*/
    printf("Please enter minute : ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &m_01);

    /*入力された分の値を時間と分に分ける*/
    h = m_01 / 60;
    m_02 = m_01 % 60;

    printf("%d分は%d時間%d分\n", m_01, h, m_02);

    return 0;

}
/**************************************************************************
 * 実習6-2
 * 下の対応表を用いて数値で指定された成績を、文字であらわして出力するプログラム
 * 
 * 正解%***成績
 *  0~60***E
 * 61~70***D
 * 71~80***C
 * 81~90***B
 * 91~100**A
 * 
 * 作成日 : 8/18.2020
 * ************************************************************************/

#include<stdio.h>

int main()
{
    char line[100];     /*コンソールからの入力*/
    int point;          /*正答率*/

    /*正答率の入力*/
    printf("正答率を入力してください : ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &point);

   if(point>=61){   /*1*/
        if(point>=71){  /*3*/
            if(point>=81){  /*5*/              
                if(point>=91){  /*7*/
                    printf("your score is A");  /*8*/
                    }
                else    /*9*/
                    printf("your score is B");
                }
            else    /*6*/
                printf("your score is C");
            }
        else    /*4*/
            printf("your score is D");
         }
    else /*2*/
         printf("your score is E");

    return 0;
}

/***************************************************************************
 * 実習6-3 
 * 実習6-2の成績の後に正答率の1の位にもtづいて＋か－をつけて出力するプログラム
 * 
 * 1の位***修飾語
 * 1~3*****－
 * 4~7*****blank
 * 8~9*****＋
 * 
 * 作成日 : 8/19.2020
 * *************************************************************************/

#include<stdio.h>

int main()
{
    char line[100];     /*コンソールからの入力*/
    int point;          /*正答率*/
    char score[3];    /*scoreと修飾語を代入*/
    score[2] = '\0';

    /*正答率の入力*/
    printf("正答率を入力してください : ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &point);

   if(point>=61){   /*1*/
        if(point>=71){  /*3*/
            if(point>=81){  /*5*/              
                if(point>=91){  /*7*/
                    score[0]='A';  /*8*/
                    }
                else    /*9*/
                    score[0]='B';
                }
            else    /*6*/
                score[0]='C';
            }
        else    /*4*/
            score[0]='D';
         }
    else /*2*/
         score[0]='E';

/*修飾語判定*/
if(point/10>=6){
    if(point%10>=4){
        if(point%10<=7){
            score[1] = ' ';
        }
        else
            score[1] = '+';
    }
    else
        score[1] = '-';

    printf("成績は%sです", score);
}
else
    score[1] = ' ';

    return 0;
}
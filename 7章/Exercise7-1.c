/***********************************************************************
 * 実習7-1
 * ヤード・ポンド法で入力された数値をメートル法で出力する単位変換プログラム
 * 変換される単位は以下の通り
 * 1mile : 1.6km
 * 1chain : 20m
 * 1yd : 0.91m
 * 1ft : 0.3m
 * 1in : 2.54cm
 * 
 * 1lb : 453g
 * 
 * 1gal : 3.785L
 * 
 * 作成日 : 8/20.2020
 * *********************************************************************/

#include<stdio.h>

int main()
{
    char line[100];         /*コンソールからの入力*/
    char uni[100];               /*単位 */
    float value,revalue;    /*valueは入力された数値、revalueは変換された数値*/

    printf("Please enter a value and revalue : ");
    fgets(line,sizeof(line),stdin);
    sscanf(line,"%f%s",&value,&uni);

    /*入力された数値の変換*/
    if(strcmp(uni,"mile")==0){        /*uniに代入された文字列とmileが等しいかの判定*/
        revalue=value*1.6;
        printf("Result : %fkm",revalue);
    }else if(strcmp(uni,"chain")==0){
        revalue = value * 20;
        printf("Result : %fm", revalue);
    }else if(strcmp(uni,"yd")==0){
        revalue = value * 0.91;
        printf("Rsult : %fm", revalue);
    }else if(strcmp(uni,"ft")==0){
        printf("Rsult : %fm", revalue);
    }else if(strcmp(uni,"in")==0){
        revalue = value * 2.54;
        printf("Rsult : %fcm", revalue);
    }else if(strcmp(uni,"lb")==0){
        revalue = value * 453;
        printf("Rsult : %fg", revalue);
    }else if(strcmp(uni,"gal")==0){
        revalue = value * 3.785;
        printf("Rsult : %fL", revalue);
    }
    else
        printf("Please enter a predifined unit.");      /*指定された単位以外の文字が入力された場合に表示される*/

    return 0;
}

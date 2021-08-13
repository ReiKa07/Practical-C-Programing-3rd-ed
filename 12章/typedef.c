#include<stdio.h>

typedef struct{
    int a;
    int b;
    int c;
}value;

main(void){

    value d;        //typedefを使用しなかった場合 struct value a となる

    d.a=12;

    printf("%d\n",d.a);

    return 0;
}
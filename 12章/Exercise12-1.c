/*******************************************************************************
 * 実習12-1
 * 郵送宛先リストのデータを格納するための構造体とその出力をする関数のプログラミング
 * 構造体、関数の名前はそれぞれ「mailing_list」と「mailing_output」
 * 
 * 作成日 : 8/31.2020
 * ****************************************************************************/

#include<stdio.h>

/*構造体*/
struct mailing_list{
    char name[60];      //名前
    char address1[60];  //地番
    char address2[60];  //住所
    char city[40];      //市
    char state[10];     //県
    long int zip;       //郵便番号
};

/*関数のプロトタイプ宣言*/
void mailing_output(struct mailing_list para);


int main(void){
    /*構造体配列の初期化*/
    struct mailing_list mailing={"HASHIMOTO NANAMI","NOGIZAKA","1-1-1","ASAHIKAWA","HOKKAIDO",19930220};

    mailing_output(mailing);

    return 0;
}

/*関数*/
void mailing_output(struct mailing_list para){
    
        printf("name : %s\n",para.name);
        printf("address1 : %s\n",para.address1);
        printf("address2 : %s\n",para.address2);
        printf("city : %s\n",para.city);
        printf("state : %s\n",para.state);
        printf("zip : %d\n",para.zip);
    
}


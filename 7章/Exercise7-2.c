/************************************************************************
 * 実習7-2
 * 日数計算プログラム
 * うるう年については以下の通り
 * 2000年をうるう年とし、ほかのうるう年はそこから±4年で計算する。
 * 通常の年を1年365日、うるう年の年を1年366日とする
 *  
 * 注意 : 西暦1年以前、西暦9999年以降はERROR、基準の年を西暦1年1月1日とする
 * 
 * 作成日 : 8/21.2020
 * **********************************************************************/ 

#include<stdio.h>

int main()
{
    char line[100];                         /*コンソールからの入力*/
    int year_01, month_01, day_01;          /*それぞれ最初の、年、月、日を代入する変数*/
    int year_02, month_02, day_02;          /*それぞれ次の、年、月、日を代入する変数*/
    int reyear_01,remonth_01;               /*それぞれ計算された年、月、日を代入する変数*/
    int reyear_02,remonth_02;               /*それぞれ計算された年、月、日を代入する変数*/
    int special_01,general_01;              /*うるう年と普通の年の回数を代入する変数*/
    int special_02,general_02;              /*うるう年と普通の年の回数を代入する変数*/
    int result,result_01,result_02;         /*計算結果を代入する変数*/

    printf("Please enter first day and second day (if you want enter 2011年8月21日 you enter 2011.8.21) : ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d.%d.%d %d.%d.%d.", &year_01, &month_01, &day_01, &year_02, &month_02, &day_02);

/*>>>>>>>エラーの検出<<<<<<<*/
if(year_01<1||year_01>9999){
    printf("you have to enter year 1 to 9999");
}else if(year_02<1||year_02>9999){
    printf("you have to enter year 1 to 9999");
}else if(month_01<1||month_01>12){
    printf("you have to enter month 1 to 12");
}else if(month_02<1||month_02>12){
    printf("you have to enter month 1 to 12");
}else if (day_02<1||day_01<1){
    printf("you have to enter after day1 ");
}

/*月ごとの判定*/
if(month_01==1||month_01==3||month_01==5||month_01==7||month_01==8||month_01==10||month_01==12){       /*2つ目のifはそれぞれ「かつ」の意味で使用*/
    if(month_01>31){
        printf("The month you enter don't has the day you enter");
    }
}else if(month_01==4||month_01==6||month_01==9||month_01==11){
    if(month_01>30){
        printf("The month you enter don't has the day you enter");
    }
}else if(month_02==1||month_02==3||month_02==5||month_02==7||month_02==8||month_02==10||month_02==12){
    if(month_02>31){
        printf("The month you enter don't has the day you enter");
    }
}else if(month_02==4||month_02==6||month_02==9||month_02==11){
    if(month_02>30){
        printf("The month you enter don't has the day you enter");
    }
}

/*2月についての判定*/
if(year_01%4==0){
    if(month_01>29){
        printf("The month you enter don't has the day you enter");
    }
}else if(year_01%4!=0){
    if(month_01>28){
        printf("The month you enter don't has the day you enter");
    }
}else if(year_02%4==0){
    if(month_02>29){
        printf("The month you enter don't has the day you enter");
    }
}else if(year_02%4!=0){
    if(month_02>28){
        printf("The month you enter don't has the day you enter");
    }
}


/*>>>>>>>1年1月1日から入力された日付までの日数をそれぞれ計算して引き算する<<<<<<<*/
/*-----うるう年の計算-----*/
    special_01=year_01/4;
    general_01=year_01-special_01;
    special_02=year_02/4;
    general_02=year_02-special_02;
    

/*-----1年1月1日から最初に入力された日付までの日数の計算-----*/
/*年の日換算*/
    special_01=special_01*366;
    general_01=general_01*365;
    reyear_01=special_01+general_01;
/*月の日換算*/
    if(year_01%4==0){           /*うるう年の場合*/
        if(month_01==1){
            remonth_01=0;
        }else if(month_01==2){
            remonth_01=31;
        }else if(month_01==3){
            remonth_01=60;
        }else if(month_01==4){
            remonth_01=91;
        }else if(month_01==5){
            remonth_01=121;
        }else if(month_01==6){
            remonth_01=152;
        }else if(month_01==7){
            remonth_01=182;
        }else if(month_01==8){
            remonth_01=213;
        }else if(month_01==9){
            remonth_01=244;
        }else if(month_01==10){
            remonth_01=274;
        }else if(month_01==11){
            remonth_01=305;
        }else if(month_01==12){
            remonth_01=335;
        }else printf("Please enter month under 13");
    }

    if(year_01%4!=0){           /*うるう年ではない場合*/
        if(month_01==1){
            remonth_01=0;
        }else if(month_01==2){
            remonth_01=31;
        }else if(month_01==3){
            remonth_01=59;
        }else if(month_01==4){
            remonth_01=90;
        }else if(month_01==5){
            remonth_01=120;
        }else if(month_01==6){
            remonth_01=151;
        }else if(month_01==7){
            remonth_01=181;
        }else if(month_01==8){
            remonth_01=212;
        }else if(month_01==9){
            remonth_01=243;
        }else if(month_01==10){
            remonth_01=273;
        }else if(month_01==11){
            remonth_01=304;
        }else if(month_01==12){
            remonth_01=334;
        }else printf("Please enter month under 13");
    }
/*-----_02についても同様に-----*/
/*年の日換算*/
    special_02=special_02*366;
    general_02=general_02*365;
    reyear_02=special_02+general_02;
/*月の日換算*/
    if(year_02%4==0){           /*うるう年の場合*/
        if(month_02==1){
            remonth_02=0;
        }else if(month_02==2){
            remonth_02=31;
        }else if(month_02==3){
            remonth_02=60;
        }else if(month_02==4){
            remonth_02=91;
        }else if(month_02==5){
            remonth_02=121;
        }else if(month_02==6){
            remonth_02=152;
        }else if(month_02==7){
            remonth_02=182;
        }else if(month_02==8){
            remonth_02=213;
        }else if(month_02==9){
            remonth_02=244;
        }else if(month_02==10){
            remonth_02=274;
        }else if(month_02==11){
            remonth_02=305;
        }else if(month_02==12){
            remonth_02=335;
        }else printf("Please enter month under 13");
    }

    if(year_02%4!=0){           /*うるう年ではない場合*/
        if(month_02==1){
            remonth_02=0;
        }else if(month_02==2){
            remonth_02=31;
        }else if(month_02==3){
            remonth_02=59;
        }else if(month_02==4){
            remonth_02=90;
        }else if(month_02==5){
            remonth_02=120;
        }else if(month_02==6){
            remonth_02=151;
        }else if(month_02==7){
            remonth_02=181;
        }else if(month_02==8){
            remonth_02=212;
        }else if(month_02==9){
            remonth_02=243;
        }else if(month_02==10){
            remonth_02=273;
        }else if(month_02==11){
            remonth_02=304;
        }else if(month_02==12){
            remonth_02=334;
        }else printf("Please enter month under 13");
    }
/*-----それぞれの計算結果を代入-----*/
result_01=reyear_01+remonth_01+day_01;
result_02=reyear_02+remonth_02+day_02;

/*-----最後に引き算-----*/
result=result_02-result_01;

/*>>>>>>>計算結果の表示<<<<<<<*/
printf("入力された二つの日付間の日数は%d日です\n",result);

return 0;
}

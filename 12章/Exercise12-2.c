/***************************************************************************
 * 実習12-2
 * 時刻と日付を格納する構造体の設計と2つの時刻の差を分の単位で表す関数
 * 
 * 作成日 : 8/31.2020
 * *************************************************************************/

#include<stdio.h>
#include <stdlib.h>

typedef struct{
    int hour;       //時間
    int minute;     //分
    int day;        //日付
}time_management;

/*関数のプロトタイプ宣言*/
int time_counter(int hour1,int hour2,int minute1,int minute2);

int main(void){
    time_management time[2] = {
		    {13, 45, 1},
		    {14, 21, 2},
    };

    printf("-logs-\n");
	    for(int i=0; i<2; i++)
		    printf("day%d : hour%d.minute%d.day%d\n",i+1,time[i].hour,time[i].minute,time[i].day);
	
    printf("-function-\n");
    printf("log01.time - log02.time = %d minutes\n", time_counter(time[0].hour, time[1].hour, time[0].minute, time[1].minute));
	    
    return(0);
}

int time_counter(int hour1, int hour2, int minute1, int minute2){
	int times;
	times = (abs(hour1) - abs(hour2))*60;
	times += abs(minute1) - abs(minute2);
	return(abs(times));
}

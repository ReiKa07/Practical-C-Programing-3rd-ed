/************************************************************
 * 実習8-2
 * n個の抵抗を並列接続した場合の抵抗値の合計を出力するプログラム
 * 
 * 作成日 : 8.14.2020
 * ***********************************************************/

#include <stdio.h>

int main(){
	char line[100];             //コンソールからの入力
    float resist[64];	        // ひとつひとつの抵抗値
	float sum= 0;		        // 合計の抵抗値
	int counter;                //カウンター

	/*配列の初期化*/
    for(counter=0; counter<64; counter++) 
        resist[counter]=0;	

	printf("並列接続した任意の数の抵抗の合計の抵抗値を計算します\n");
	printf("抵抗値を入力してください (0を入力すると終了します ※抵抗の最大数は64です)\n");

	for(counter=0; counter<64; counter++){
		printf("抵抗%02d => ", counter+1); 
        fgets(line,sizeof(line),stdin);
        sscanf(line,"%f", &resist[counter]);
		
        if(resist[counter] == 0)        // 0が入力されたらfor文を抜ける
            break;	
		sum += 1/resist[counter];	    // 入力された抵抗値の逆数を加算
	}

	printf("合計の抵抗値は%fΩです\n", 1/sum);	// ひとつひとつの抵抗値の逆数の和の逆数を出力

	return(0);
}
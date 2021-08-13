/*******************************************
 * 実習4-4
 * 大きなHELLOの出力
 * 
 * 各文字の大きさは縦が7文字分、横が5文字分
 * 
 * 作成日 : 8/18
 * *****************************************/

#include <stdio.h>

int main(){
	printf(
		"H   H  EEEEE  L      L      OOOOO\n"
		"H   H  E      L      L      O   O\n"
		"H   H  E      L      L      O   O\n"
		"HHHHH  EEEEE  L      L      O   O\n"
		"H   H  E      L      L      O   O\n"
		"H   H  E      L      L      O   O\n"
		"H   H  EEEEE  LLLLL  LLLLL  OOOOO\n"
	);
	return(0);
}
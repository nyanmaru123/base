//====================================================================
//
//復習 4/2
//
//Author : masayasu wakita
//
//====================================================================
#define _CRT_SECURE_NO_WARNINGS//警告無視

#include <Windows.h>
#include <stdio.h>

//====================================================================
//マクロ定義
//====================================================================
#define MAX_DATA 5

//====================================================================
//メイン関数
//====================================================================
void main(void)
{
	printf("こんいちは");
	printf("高橋聖哉");

	printf("\nこんばんは");
	printf("井上遼真");

	printf("\nこんばんは");
	printf("ヤマダ電機");

	//キー入力待ち
	rewind(stdin);
	getchar();

}
/*
第2章
入出録の学習用プログラム
*/
#define _CRT_SECURE_NO_WARNINGS  // Visual Studio で scanf() を使うために記述
#include <stdio.h>
int main(void)  // これが main 関数
{
  int life;  // 整数を扱う変数
  printf("主人公の体力値を入力してください。\n");
  scanf("%d", &life);  /* 入力を受け付ける状態になる */
  printf("主人公の体力は %d です", life);
}
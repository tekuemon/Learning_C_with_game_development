#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
  int life;
  printf("主人公の体力値を入力して下さい\n");
  scanf("%d", &life);
  printf("主人公の体力は%dです", life);
}
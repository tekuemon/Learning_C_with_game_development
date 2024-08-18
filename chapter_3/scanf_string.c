#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
  char txt[11];
  printf(" ※要素数 11 の配列は半角 10 文字まで、全角は 5 文字まで代入できます \n");
  printf(" あなたの名前は? \n");
  scanf("%s", txt);
  printf("%s よ、いよいよ、冒険のたびに出発じゃ。", txt);
}
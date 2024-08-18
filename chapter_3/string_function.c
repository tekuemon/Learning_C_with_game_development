#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
  char str1[20] = "伝説の";
  char str2[] = "勇者";
  char str3[] = "sword";
  char str4[] = "shield";
  char str5[] = "邪悪な魔竜を倒す冒険の旅へ";
  char str6[30];

  printf("「%s」と「%s」を str1 に連結します。\n", str1, str2);
  printf("連結前の str1 の長さは %d です。\n", strlen(str1));
  strcat(str1, str2);
  printf("連結した文字列は「%s」\n", str1);
  printf("連結後の str1 の長さは %d です。\n", strlen(str1));

  int c = strcmp(str3, str4);
  printf("「%s」と「%s」を比較した結果は %d。\n", str3, str4, c);

  printf("初期値を未代入の str6 に「%s」をコピーします。\n", str5);
  strcpy(str6, str5);
  printf("str6 の中身は「%s」になりました。", str6);
}
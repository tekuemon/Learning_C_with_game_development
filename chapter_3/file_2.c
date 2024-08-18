#define _CRT_SECURE_NO_WARNINSG
#include <stdio.h>
int main(void)
{
  char data[3][13] = { "勇者", "神官", "魔法使い" };
  FILE* fp;
  fp = fopen("save_data.txt", "r");
  if (fp == NULL)
  {
    printf("ファイルを開くことができません");
    return -1;
  }
  for (int i = 0; i < 3; i++) fscanf(fp, "%s", data[i]);
  fclose(fp);
  for (int i = 0; i < 3; i++) printf("%s\n", data[i]);
}
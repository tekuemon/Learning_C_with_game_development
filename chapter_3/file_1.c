#define _CRT_SECURE_NO_WARNINSG
#include <stdio.h>
int main(void)
{
  char name[][13] = { "勇者", "神官", "魔法使い" };
  FILE* fp;
  fp = fopen("save_data.txt", "w");
  if (fp == NULL)
  {
    printf("ファイルを開くことができません");
    return -1;
  }
  for (int i = 0; i < 3; i++) fprintf(fp, "%s\n", name[i]);
  fclose(fp);
  printf("ファイルに書き込みました");
}
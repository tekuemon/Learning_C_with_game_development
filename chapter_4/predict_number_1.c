#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
  // 1. コンピュータが1から99の範囲の乱数で数を決める
  srand((unsigned int)time(NULL));
  int ans = rand() % 99 + 1;

  // プレイヤーの入力回数
  int count = 0;

  // プレイヤーの入力受付
  int input;

  // 前文
  printf("私の思いうかべる数を当てましょう。\n");
  printf("その数は1~99のいずれかの整数です。\n");

  // ループ
  while (1)
  {
    // 2. プレイヤーは、その数がいくつであるかを予想して入力する
    printf("その数は?");
    scanf("%d", &input);

    // 3. 入力した数を数える
    count++;

    // 5. 入力した数が、コンピューターの決めた数と同じなら、当てるまでに何回、入力したかを出力して終了する
    if (input == ans)
    {
      printf("正解です。あなたは %d 回で当てました。\n", count);
      break;
    }
    else  // 4. 外れたとき (入力した数が、コンピューターの決めた数と異なる時) は、次のヒントを与える
    {
      // (ア) 入力した数が、コンピューターの決めた数より大きな時、その旨を出力
      if (input > ans)
      {
        printf("違います。それより小さな数です。\n");
      }
      // (イ) 入力した数が、コンピューターの決めた数より小さな時、その旨を出力
      if (input < ans)
      {
        printf("違います。それより大きな数です。\n");
      }
    }
  }
}
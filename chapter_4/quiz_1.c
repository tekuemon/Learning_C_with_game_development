#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
int main(void)
{
  // 問題文と模範解答
  char QUIZ[5][256] = 
  {
    "2020年に発売され、ヒットしたNintendo Swicthのゲーム「○○○○ どうぶつの森」。○○○○に入る言葉は?",
    "2010年代にスマートフォンでヒットしたソーシャルゲーム「パズドラ」の正式名称は?",
    "2000年代にガラケーでヒットした、自転車に乗った棒人間を操作して遊ぶゲームの名称は?",
    "1990年代にゲームセンターに設置され、ブームとなった写真シール機「プリクラ」の正式名称は?",
    "1980年代に大ヒットした家庭用ゲーム機「ファミコン」の正式名称は?"
  };
  char ANS[5][256] = 
  {
    "あつまれ",
    "パズル&ドラゴンズ",
    "チャリ走",
    "プリント倶楽部",
    "ファミリーコンピュータ"
  };

  // 正答数カウント
  int score = 0;

  // ループ
  for (int i = 0; i < 5; i++)
  {
    char input[256];
    printf("%s\n", QUIZ[i]);
    scanf("%s", input);
    if (strcmp(input, ANS[i]) == 0) {
      score++;
      printf("正解です。\n");
    }
    else
    {
      printf("不正解です。正解は %s です。\n", ANS[i]);
    }
  }

  // 正答数表示
  printf("あなたは %d 問、正解しました。\n", score);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
struct CHARACTER
{
  char name[11];
  int life;
  int strength;
  int defense;
};

int main(void)
{
  struct CHARACTER player;
  strcpy(player.name, "マーズ");
  player.life = 1000;
  player.strength = 500;
  player.defense = 300;
  printf("プレイヤーのパラメーターを出力します。\n");
  printf("名前 %s\n", player.name);
  printf("体力 %d\n", player.strength);
  printf("腕力 %d\n", player.life);
  printf("防御力 %d\n", player.defense);
}
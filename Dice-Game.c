#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main(void){
 
  int s1,s2;
  char name[50];

  printf("What is your name?\n>");
  scanf("%s",name);
  printf("Hello,%s!\n",name);
  
 
  /* 乱数の種を初期化 */
  srand(time(NULL));
 
  /* サイコロを振る */
  printf("Rolling the dice...\n");
  s1 = rand() % 6 + 1;
  s2 = rand() % 6 + 1;
  printf("Die 1: %d\nDie 2: %d\nTotal value: %d\n",s1,s2,s1+s2);
 
 
 
  return 0;
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Music.h"

int main(void){
  
  int size = 20;
  Music *m[20];
  int count = 0, menu, num;
  int del, index = 0;
  
  count = loadData(s);
  index = count;
  
  
while (1)
{
    menu = selectMenu();
    if (menu == 0)
    {
     break; 
    }
  else if (menu == 1 && count > 0) {
    saveData(s, count); 
  }
  
  else if (menu == 2 && count < size)
  {
    searchMusic(s, count);

  }
  
  else if (menu == 3 && count > 0) {
      s[count] = (Score *)malloc(sizeof(Score)); // 동적 메모리 할당 addScore(s[count]);
      addMusic(s[count]);
      count++;
   
  }
  
  else if (menu == 4 && count > 0) {
    listMusic(s, count);
    num = selectNum();
    if (num > 0 && num <= count) {
    deleteMusic(s, count, num);
    }
    else
    {
    printf("잘못된 번호입니다.\n");
    } 
  }
  
  else if (menu == 5 && count > 0) {
   listMusic(s, count);
    num = selectNum();
    if (num > 0 && num <= count) {
    updateMusic(s[num - 1]);
    }
    else
    {
    printf("잘못된 번호입니다.\n");
      }  
  }
  
  else if (menu == 6 && count > 0){
    downMusic(s, count);
  } 
   else if (menu == 7 && count > 0){
    listenMusic(s, count);
  } 
}
  // 동적 메모리 해제
  for (int i = 0; i < count; i++) {
      free(s[i]);
  }
  printf("종료됨!\n");
  
  
  return 0;
}

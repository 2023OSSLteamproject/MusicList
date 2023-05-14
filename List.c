#include <stdio.h>

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
  listScore(s, count); }
  else if (menu == 2 && count < size)
  {
  s[count] = (Score *)malloc(sizeof(Score)); // 동적 메모리 할당 addScore(s[count]);
  count++;
  }
  else if (menu == 3 && count > 0) {
  listScore(s, count);
  num = selectNum();
  if (num > 0 && num <= count) {
  updateScore(s[num - 1]);
  }
  else
  {
  printf("잘못된 번호입니다.\n");
  } 
  }
  else if (menu == 4 && count > 0) {
  listScore(s, count);
  num = selectNum();
  if (num > 0 && num <= count) {
  deleteScore(s, count, num);
  }
  else
  {
  printf("잘못된 번호입니다.\n");
  } 
  }
  else if (menu == 5 && count > 0) {
  saveData(s, count); 
  }
  else if (menu == 6 && count > 0){
  searchName(s, count);
  } 
}
  // 동적 메모리 해제
  for (int i = 0; i < count; i++) {
      free(s[i]);
  }
  printf("종료됨!\n");
  
  
  return 0;
}

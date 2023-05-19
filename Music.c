#include "Music.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int selectMenu(){ //메뉴를 선택하기 위해 메뉴를 보여주는 함수 
   int menu;
   printf("***** 플레이리스트 메뉴 *****\n");
   printf("0. 종료\n");
   printf("1. 데이터파일저장\n");
   printf("2. 노래 검색\n");
   printf("3. 노래 추가\n");
   printf("4. 노래 삭제\n");
   printf("5. 노래 수정\n");
   printf("6. 노래 다운로드\n");
   printf("7. 노래 듣기\n");
   printf("원하는 메뉴는 ==>");
   scanf("%d", &menu);
    
   return menu;
}

void readMusic(Music m){
}

int addMusic(Music *m){
}

void listMusic(Music *m[], int count){
}

void deleteMusic(Music *m[], int count){
}

void updateMusic(Music *m){
}

void downMusic(Music *m[], int count){
}

void listenMusic(Music *m[], int count){
}

void searchMusic(Music *m[], int count){
}

void saveData(Music *m[], int count){ //추가했던 데이터를 txt파일에 저장하는 함수
    FILE *fp;
    fp = fopen("list.txt", "wt");
    for (int i = 0; i < count; i++)
    {
        fprintf(fp, "%d %s  %s   %d   %s %s", i + 1, m[i]->title, m[i]->name, &m[i]->number, m[i]->down, m[i]->memo );
    }
    fclose(fp);
    printf("=> 저장완료!\n");
}

int loadData(Music *m[]){ //저장된 데이터를 불러오는 함수 
    int i = 0;
    FILE *fp;
    fp = fopen("list.txt", "rt"); 
    if (fp == NULL) {
    printf("=> 파일 없음\n");
    return 0; 
    }
for (i = 0; i < 100; i++) {
    m[i] = (Music *)malloc(sizeof(Music)); 
    if (feof(fp)) break;
    fscanf(fp,"%s", m[i]->title);
    fscanf(fp,"%s", m[i]->name);
    fscanf(fp,"%d", &m[i]->number);
    fscanf(fp,"%s", m[i]->down);
    fscanf(fp,"%s", m[i]->memo);
}
printf("=> 로딩 성공!\n");
    
fclose(fp);
    
return i;
}

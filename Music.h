#ifndef MUSIC_H
#define MUSIC_H

typedef struct {
  char title[20];
  char name[20];
  int number;
  char down;
  char memo[40];
} Music;

int selectMenu(); // 처음에 메뉴를 선택할 수 있게 보여주는 함수
int selectNum();
void listMusic(Music m); // 상단바에서 보여주는 모든 것을 읽는 함수
int addMusic(Music *m[], int count); // 음악을 추가하는 함수
void readMusic(Music *m[], int count); // 현 음악리스트를 보여주는 함수
int deleteMusic(Music *m[]); // 음악을 플레이리스트에서 삭제하는 함수
int updateMusic(Music *m[]); // 플레이리스트를 수정하는 함수
void downMusic(Music *m[], int count);   // 노래다운로드 하는 함수
void listenMusic(Music *m[], int count); // 노래듣는 함수
void searchMusic(Music *m[], int count); // 음악을 검색하는 함수
void saveData(Music *m[], int count); // 데이터를 파일에 저장하는 함수
int loadData(Music *m[]); // 파일에 저장된 데이터를 불러오는 함수

#endif

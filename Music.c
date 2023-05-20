#include "Music.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int selectMenu()
{ // 메뉴를 선택하기 위해 메뉴를 보여주는 함수
    int menu;

    printf("\n***** 플레이리스트 메뉴 *****\n");
    printf("0. 종료\n");
    printf("1. 데이터파일저장\n");
    printf("2. 노래 검색\n");
    printf("3. 노래 추가\n");
    printf("4. 노래 삭제\n");
    printf("5. 노래 수정\n");
    printf("6. 노래 다운로드\n");
    printf("7. 노래 듣기\n");
    printf("8. 리스트 조회하기\n");
    printf("원하는 메뉴는 ==>");
    scanf("%d", &menu);

    return menu;
}

void listMusic(Music m)
{
    printf("    %s   %3s   %6d   %6c  %9s\n", m.title, m.name, m.number, m.down, m.memo);
}

void readMusic(Music *m[], int count)
{
    printf("**************************\n NO  제목   가수명   재생횟수  다운여부    메모\n");
    for (int i = 0; i < count; i++)
    {
        if (m[i]->number < 0)
            continue;
        printf("%2d", i + 1);
        listMusic(*m[i]);
    }
    if (count <= 0)
        printf("조회할 데이터가 없습니다.\n");
    printf("\n");
}

int addMusic(Music *m[], int count)
{

    printf("노래제목은? ");
    scanf("%s", m[count]->title);
    printf("가수명은? ");
    scanf("%s", m[count]->name);
    printf("현재 재생횟수는? ");
    scanf("%d", &m[count]->number);
    printf("다운여부는?[Y/N] ");
    scanf(" %c", &m[count]->down); // %c 앞에 공백 추가
    printf("간단한메모(띄어쓰기금지) ");
    scanf("%s", m[count]->memo);

    return count + 1;
}

int deleteMusic(Music *m[], int count)
{
    int index;
    printf("\n삭제할 메뉴 번호는? ");
    scanf("%d", &index);
    if (index >= 1 && index <= count)
    {
        m[index - 1]->number = -1;
        printf("=> 삭제됨!\n\n");
        return 1;
    }
    else
    {
        printf("삭제할 데이터가 없습니다.\n\n");
        return 0;
    }
}
}

int updateMusic(Music *m[])
{
    int index;
    printf("\n 수정할 노래 번호는? ");
    scanf("%d", &index);
    getchar();
    printf("변경할 노래제목은? ");
    fgets(m[index - 1]->title, 40, stdin);
    m[index - 1]->title[strcspn(m[index - 1]->title, "\n")] = '\0';
    printf("변경할 가수이름은? ");
    scanf("%s", m[index - 1]->name);
    printf("변경할 노래횟수는? ");
    scanf("%d", &m[index - 1]->number);
    printf("변경할 다운여부는? ");
    scanf("%c", &m[index - 1]->down);
    getchar();
    printf("변경할 메모는? ");
    scanf("%s", m[index - 1]->memo);
    getchar();

    printf("=> 수정성공!\n\n");

    return 1;
}

void downMusic(Music *m[], int count)
{
    int index;
    printf("\n다운로드할 노래 번호를 선택하세요: ");
    scanf("%d", &index);
    getchar();

    if (index >= 1 && index <= count)
    {
        m[index - 1]->down = 'Y';
        printf("다운로드 하였습니다.\n\n");
    }
    else
    {
        printf("유효하지 않은 노래 번호입니다.\n\n");
    }
}

void listenMusic(Music *m[], int count)
{
    int index;
    printf("\n들을 노래 번호를 선택하세요: ");
    scanf("%d", &index);
    getchar();

    if (index >= 1 && index <= count)
    {
        m[index - 1]->number++;
        printf("=> 들은 횟수: %d회\n\n", m[index - 1]->number);
    }
    else
    {
        printf("유효하지 않은 노래 번호입니다.\n\n");
    }
}


void searchMusic(Music *m[], int count)
{
    int scnt = 0;
    char search[20];
    printf("\n검색할 노래제목은 ? ");
    scanf("%s", search);
    printf("*****************\n");
    for (int i = 0; i < count; i++)
    {
        if (m[i]->number == -1)
            continue;
        if (strstr(m[i]->title, search))
        {
            printf("%2d ", i + 1);
            listMusic(*m[i]);
            scnt++;
        }
    }
    if (scnt == 0)
        printf("=> 검색된 데이터 없음!\n");
    printf("\n");
}

void saveData(Music *m[], int count)
{ // 추가했던 데이터를 txt파일에 저장하는 함수
    FILE *fp;
    fp = fopen("list.txt", "wt");
    for (int i = 0; i < count; i++)
    {
        if(m[i]->number >= 0)
        fprintf(fp, "%s  %s   %d   %c %s",  m[i]->title, m[i]->name,
                m[i]->number, m[i]->down, m[i]->memo);
    }
    fclose(fp);
    printf("=> 저장완료!\n\n");
}

int loadData(Music *m[])
{
    FILE *fp;
    int i = 0;
    fp = fopen("list.txt", "rt");
    if (fp == NULL)
    {
        printf("=> 파일 없음\n");
        return 0;
    }
    while (i < 20)
    {
        m[i] = (Music *)malloc(sizeof(Music));
        if (fscanf(fp, "%s", m[i]->title) == EOF)
            break;
        fscanf(fp, "%s", m[i]->name);
        fscanf(fp, "%d", &(m[i]->number));
        fscanf(fp, " %c", &(m[i]->down));
        fscanf(fp, "%s", m[i]->memo);
        i++;
    }
    fclose(fp);
    printf("=> 로딩 성공!\n");
    return i;
}

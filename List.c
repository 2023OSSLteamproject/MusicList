#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "Music.h"

int main(void)
{
    Music *m[20];
    int size = 20;
    int count = 0, menu, index = 0;

    count = loadData(m);
    index = count;

    while (1)
    {
        menu = selectMenu();
        if (menu == 0)
        {
            break;
        }
        else if (menu == 1 && count > 0)
        {
            saveData(m, count);
        }

        else if (menu == 2 && count < size)
        {
            searchMusic(m, count);
        }

        else if (menu == 3)
        {
            m[count] = (Music *)malloc(sizeof(Music));
            addMusic(m,count);
            count++;
        }

        else if (menu == 4 )
        {
            readMusic(m, count);
            deleteMusic(m);
        }

        else if (menu == 5 )
        {
            readMusic(m, count);
            updateMusic(m);
        }

        else if (menu == 6 )
        {
            downMusic(m, count);
        }
        else if (menu == 7 )
        {
            listenMusic(m, count);
        }
        if (menu == 8 )
        {
            readMusic(m, count);
        }
    }
    // 동적 메모리 해제
    for (int i = 0; i < count; i++)
    {
        free(m[i]);
    }
    printf("종료됨!\n");

    return 0;
}

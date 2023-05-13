int selectMenu(){
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

void saveData(Music *m[], int count){
    FILE *fp;
    fp = fopen("list.txt", "wt");
    for (int i = 0; i < count; i++)
    {
        fprintf(fp, "%d %s  %s   %d   %s %s", i + 1, p[i]->title, p[i]->name, &p[i]->number, p[i]->down, p[i]->memo );
    }
    fclose(fp);
    printf("=> 저장완료!\n");
}

int loadData(Music *m[]){
    int i = 0;
    FILE *fp;
    fp = fopen("list.txt", "rt"); 
    if (fp == NULL) {
    printf("=> 파일 없음\n");
    return 0; 
    }
for (i = 0; i < 100; i++) {
    m[i] = (Music *)malloc(sizeof(Score)); 
    if (feof(fp)) break;
    fscanf(fp,"%s", s[i]->title);
    fscanf(fp,"%s", s[i]->name);
    fscanf(fp,"%d", &s[i]->number);
    fscanf(fp,"%s", s[i]->down);
    fscanf(fp,"%s", s[i]->memo);
}
printf("=> 로딩 성공!\n");
    
fclose(fp);
    
return i;
}

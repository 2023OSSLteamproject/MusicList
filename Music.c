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
        fprintf(fp, "%s  %s   %d   %d    %s %s", i + 1, p[i]->title, p[i]->name, &p[i]->number, p[i]->down, p[i]->memo );
    }
    fclose(fp);
    printf("=> 저장완료!\n");
}
int loadData(Music *m[]){
}

#include <stdio.h>

int main(int argc, char *argv[]){
    if(argc == 1){
        printf("1 argument expected");
        return 0;
    }
    FILE* f = fopen(argv[1], "r");
    if(!f){
        perror("Unable to open file");
        return 0;
    }
    char s[100];
    while(fgets(s, 100, f)){
        printf("%s", s);
    }
    fclose(f);
}
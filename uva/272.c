#include <stdio.h>

int main(){
    char c;
    int aux = 1;
    while(scanf("%c", &c) != EOF){
        if(c=='"'){
            if(aux){
                printf("``");
                aux--;
            }
            else{
                printf("''");
                aux++;
            }
        }
        else{
            printf("%c",c);
        }
    }
    return 0;
}

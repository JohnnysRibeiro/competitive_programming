#include <stdio.h>

int main(){
    int a,b,tc;
    scanf("%d",&tc);
    while(tc--){
        scanf("%d %d", &a, &b);
        if(a>b)
            printf(">");
        else if(a<b)
            printf("<");
        else
            printf("=");
        printf("\n");
    }
    return 0;
}

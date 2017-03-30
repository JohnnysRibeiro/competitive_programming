#include <stdio.h>
#include <math.h>

int main(){
    int a,b,result,tc;
    double e,f;
    scanf("%d", &tc);
    while(tc--){
        scanf("%d %d", &a, &b);
        e = ceil(a/3);
        f = ceil(b/3);
        result = (int) e*f;
        printf("%d\n",result);
    }
    return 0;
}

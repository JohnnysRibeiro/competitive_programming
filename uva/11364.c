#include <stdio.h>
void bubble( int v[], int qtd )
{
  int i;
  int j;
  int aux;
  int k = qtd - 1 ;

  for(i = 0; i < qtd; i++)
  {
     for(j = 0; j < k; j++)
     {
        if(v[j] > v[j+1])
        {
            aux = v[j];
        v[j] = v[j+1];
        v[j+1]=aux;
        }
     }
     k--;
  }
}
int main(){
    int a,b,result,tc;
    scanf("%d",&tc);
    while(tc--){
        scanf("%d",&a);
        int i,result,arr[a];
        for(i=0;i<a;i++){
            scanf("%d", &b);
            arr[i]=b;
        }
        bubble(arr,a);
        result = 2*(arr[a-1] - arr[0]);
        printf("%d\n",result);
    }
    return 0;
}

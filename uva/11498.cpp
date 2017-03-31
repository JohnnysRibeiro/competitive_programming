#include <bits/stdc++.h>

using namespace std;

int main(){
    int tc;
    while (scanf("%d",&tc), tc){
        int x,y;
        scanf("%d %d",&x,&y);
        for (int i = 0; i<tc; i++){
            int a,b,pointa, pointb;
            scanf("%d %d",&a,&b);
            pointa=a-x;
            pointb=b-y;
            // printf("TESTE: pointa = %d pointb = %d\n", pointa, pointb);
            if(pointa == 0 || pointb == 0)
                cout << "divisa" << endl;
            else if(pointa > 0 && pointb > 0)
                cout << "NE" << endl;
            else if(pointa > 0 && pointb < 0)
                cout << "SE" << endl;
            else if(pointa < 0 && pointb > 0)
                cout << "NO" << endl;
            else if(pointa < 0 && pointb < 0)
                cout << "SO" << endl;
        }
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main(){
    int a,b,c,tc,counter=1;
    scanf("%d", &tc);
    while(tc--){
        scanf("%d %d %d", &a, &b, &c);
        vector<int> v;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        sort(v.begin(),v.end());
        cout << "Case " << counter << ": " << v[1] << endl;
        counter++;
    }

    return 0;
}

#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;

int main(){
    ios::sync_with_stdio(false);

    int tc;
    cin >> tc;
    while(tc--){
        int farmers, premium = 0;
        cin >> farmers;
        while(farmers--){
            ull farm_size, animals, fef;
            cin >> farm_size >> animals >> fef;
            premium += farm_size * fef;
        }
        cout << premium << endl;
    }
    
    return 0;
}



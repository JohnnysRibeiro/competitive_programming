#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;

int main(){
    ios::sync_with_stdio(false);

    ll a,tc=1;
    while(cin>>a, a){
        ll reason, balance=0;
        for(int i=0;i<a;i++){
            cin>>reason;
            if (reason != 0)
                balance++;
            else
                balance--;
        }
        cout<<"Case "<<tc<<": "<<balance<<endl;
        tc++;
    }
    
    return 0;
}



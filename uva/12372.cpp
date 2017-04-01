#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;

int main(){
    ios::sync_with_stdio(false);

    ll tc,i=1;
    cin>>tc;
    while(tc--){
        ll a,b,c;
        string response = "good";
        cin>>a>>b>>c;
        if(a>20 || b>20 || c>20)
            response = "bad";
        cout<<"Case "<<i<<": "<<response<<endl;
        i++;
    }
    
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;

int main(){
    ios::sync_with_stdio(false);

    ll tc,result=0,i=1;
    cin>>tc;
    while(tc--){
        string a;
        ll b;
        cin>>a;
        if(a=="donate"){
            cin>>b;
            result+=b;
        }
        else{
            cout<<result<<endl;
        }
    }
    
    return 0;
}

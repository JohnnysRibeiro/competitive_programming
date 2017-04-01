#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;

int main(){
    ios::sync_with_stdio(false);

    ll a;
    cin>>a;
    while(a--){
        string line;
        cin>>line;
        if(line.length()>3){
            cout<<3<<endl;
        }
        else{
            if((line[0]=='t' && line[1]=='w')
            || (line[0]=='t' && line[2]=='o')
            || (line[1]=='w' && line[2]=='o')){
                cout<<2<<endl;
            }
            else{
                cout<<1<<endl;
            }
        }
    }
    
    return 0;
}



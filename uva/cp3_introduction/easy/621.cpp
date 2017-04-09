#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;

int main(){
    ios::sync_with_stdio(false);

    ll tc;
    string a;
    cin>>tc;
    while(tc--){
        cin>>a;
        if(a=="1"||a=="4"||a=="78")
            cout<<"+"<<endl;
        else if(a[a.length()-2]=='3' && a[a.length()-1]=='5')
            cout<<"-"<<endl;
        else if(a[0]=='1' && a[1]=='9' && a[2]=='0')
            cout<<"?"<<endl;
        else if(a[0]=='9' && a[a.length()-1]=='4')
            cout<<"*"<<endl;
    }
    
    return 0;
}



#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;

int main(){
    ios::sync_with_stdio(false);
    string line;
    int i=1;
    getline(cin, line);
    while(line!="*"){
        cout<<"Case "<<i<<": ";
        if(line == "Hajj")
            cout<<"Hajj-e-Akbar"<<endl;
        else
            cout<<"Hajj-e-Asghar"<<endl;
        getline(cin, line);
        i++;
    }
    
    
    return 0;
}

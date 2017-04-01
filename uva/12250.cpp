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
    while(line!="#"){
        cout<<"Case "<<i<<": ";
        if(line == "HELLO")
            cout<<"ENGLISH"<<endl;
        else if(line == "HALLO")
            cout<<"GERMAN"<<endl;
        else if(line == "HOLA")
            cout<<"SPANISH"<<endl;
        else if(line == "CIAO")
            cout<<"ITALIAN"<<endl;
        else if(line == "ZDRAVSTVUJTE")
            cout<<"RUSSIAN"<<endl;
        else if(line == "BONJOUR")
            cout<<"FRENCH"<<endl;
        else
            cout<<"UNKNOWN"<<endl;
        getline(cin, line);
        i++;
    }
    
    
    return 0;
}

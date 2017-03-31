#include <bits/stdc++.h>
using namespace std;

int main(){
    int num,tc;
    scanf("%d", &tc);

    while(tc--){
        scanf("%d", &num);
        double result = (num*567/9 + 7492)*235/47 - 498;
        ostringstream strs;
        strs << result;
        string answer = strs.str();
        answer.pop_back();
        cout << answer.back() << endl;
    }

    return 0;
}

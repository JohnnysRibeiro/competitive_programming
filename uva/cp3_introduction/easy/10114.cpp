#include <bits/stdc++.h>

using namespace std;

using ll = long long;
using ull = unsigned long long;
using pii = pair<int, int>;

int main(){
    ios::sync_with_stdio(false);

    ll months_duration,number_deprecations;
    
    double payment,loan_amount,percentages[101];
    while(cin>>months_duration>>payment>>loan_amount>>number_deprecations, months_duration>0){
        ll month;
        double percentage;
        while (number_deprecations--) {
            cin >> month >> percentage;
            for (int i = month; i < 101; i++)
                percentages[i] = percentage;
        }
        double loan_amount_left = loan_amount;
        double car_value = (loan_amount+payment)*(1-percentages[0]);
        double monthly_payment = loan_amount / months_duration;
        ll total_months = 0;
        while(loan_amount_left>car_value){
            total_months++;
            loan_amount_left -= monthly_payment;
            car_value -= car_value*percentages[total_months];
        }
        if(total_months==1){
            cout<<total_months<<" month"<<endl;
        }
        else{
            cout<<total_months<<" months"<<endl;
        }
    }
    
    return 0;
}



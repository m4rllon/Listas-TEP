#include <bits/stdc++.h>

using namespace std;

int main(){

    int n, countIn = 0, countOut = 0;
    cin >> n;
    while (n--){
        int x;
        cin >> x;
        (x >= 10 && x <= 20) ? countIn++ : countOut++;
    };
    
    cout << countIn << " in" << "\n";
    cout << countOut << " out" << "\n";

    return 0;
}
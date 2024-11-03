#include <bits/stdc++.h>

using namespace std;

bool isPrim(int n){
    for(int i = n-1; i > 1; i--){
        if(n%i == 0) return false;
    }
    return true;
};

int main(){
    int count;
    cin >> count;
    while (count--){
        int num;
        cin >> num;
        string result = (isPrim(num)) ? "eh primo\n" : "nao eh primo\n";
        cout << num << " " << result;
    }
    return 0;
}
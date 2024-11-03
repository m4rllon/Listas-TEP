#include <bits/stdc++.h>

using namespace std;

string crescDesc (int a, int b){
    if(a == b) abort();
    else return (a > b) ? "Decrescente\n" : "Crescente\n";   
};

int main(){
    ios::sync_with_stdio(false);

    long long a, b;
    cin >> a >> b;
    cout << crescDesc(a, b);
    return 0;
}
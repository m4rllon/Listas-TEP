#include <bits/stdc++.h>

using namespace std;

int main(){
    int count;
    cin >> count;
    vector<int> vetor(count);

    for(int i = 0; i <= count; i++){
        cin >> vetor[i];
    }
    

    for(int num : vetor) cout << vetor[num] <<  "\n";
    
    return 0;
}
#include <bits/stdc++.h>
 
using namespace std;

int main(){
    string in;
    bool controler1 = false;
    bool controler2 = false;
    bool controler3 = false;
    cin >> in;

    for (int i = 0; i < 3; i++){
        if(in[i] == 'a' || in[i] == 'A') controler1 = true;
        else if(in[i] == 'b' || in[i] == 'B') controler2 = true;
        else if(in[i] == 'c' || in[i] == 'C') controler3 = true;
    };

    if(controler1 && controler2 && controler3) cout << "Yes\n";
    else cout << "No\n";

    return 0;
}
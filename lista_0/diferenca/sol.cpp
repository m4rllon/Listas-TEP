#include <iostream>

using namespace std;

int main(){
    ios::sync_with_stdio(false);

    int a, b, c, d;
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cout << "DIFERENCA = " << ((a*b) - (c*d)) << "\n";
    return 0;
}
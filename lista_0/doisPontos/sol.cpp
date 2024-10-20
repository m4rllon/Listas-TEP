#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){

    double px1, py1;
    double px2, py2;

    cin >> px1 >> py1;
    cin >> px2 >> py2;

    double distancia = sqrt(pow((px2 - px1), 2) + pow((py2 - py1), 2));

    cout << fixed << setprecision(4);
    cout << distancia << "\n";

    return 0;
}
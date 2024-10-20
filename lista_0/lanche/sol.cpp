#include <iostream>
#include <map>
#include <iomanip>

using namespace std;

int main(){

    int item, quant;
    cin >> item >> quant;

    map<int, double> table_price = {
        {1, 4.0},
        {2, 4.5},
        {3, 5.0},
        {4, 2.0},
        {5, 1.5},
    };

    cout << fixed << setprecision(2);

    for(const auto& pair : table_price){
        if(pair.first == item) cout << "Total: R$ " << (quant*pair.second) << "\n";
    }

    return 0;
}
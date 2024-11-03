#include <bits/stdc++.h>

using namespace std;


void bubbleSort(std::vector<int>& arr) {
    int n = arr.size();
    vector<int> vectorAux = arr;
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                std::swap(arr[j], arr[j + 1]);
                // if()
            }
        }
    }
}

int main(){
    std::vector<int> arr = {64, 34, 25, 12, 22, 11, 90};

    bubbleSort(arr);
    
    std::cout << "Vetor ordenado (Bubble Sort): ";
    for (int num : arr) {
        std::cout << num << " ";
    }

    return 0;
}
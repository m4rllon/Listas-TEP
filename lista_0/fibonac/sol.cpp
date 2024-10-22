#include <iostream>

using namespace std;

int fibonacci(int n){
    if(n == 1 | n == 2) return 1;
    return fibonacci(n-1) + fibonacci(n-2);
}

int fatorial(int n){
    int fatorial = 1;
    while (n--){
        if(n == 0) break;
        fatorial = fatorial * n;
    }
    return fatorial;
}

int main(){
    Fibonacci:
    for (int i = 1; i <= 20; i++){
        cout << fibonacci(i) << ", ";
    }

    // Fatorial:
    // cout << "\n" << fatorial(10) << "\n";
    return 0;
}
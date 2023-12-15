#include <iostream>

int main() {
    using namespace std;
    int n;
    cin >> n;
    int d = 2;
    while (d * d <= n){
        if (n % d == 0){
            cout << "Число не простое" << endl;
            return 0;
        } 
        d++;
    };
    cout << "Число простое" << endl;
    return 0;
}
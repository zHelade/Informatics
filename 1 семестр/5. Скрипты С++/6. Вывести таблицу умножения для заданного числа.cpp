#include <iostream>

int main() {
    using namespace std;
    int d = 1, n;
    cin >> n;
    while (d * d <= n){
        if (n % d == 0){
            cout << d << ' ' <<n / d << endl;
        }
        d += 1;
    };
    
    return 0;
}
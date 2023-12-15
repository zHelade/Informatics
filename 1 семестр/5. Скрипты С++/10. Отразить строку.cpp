#include <iostream>

int main() {
    using namespace std;
    string n;
    getline(cin, n);
    int l = n.length();
    for (int i = l - 1; i >= 0; i--){
        cout << n[i];
    };
    
    return 0;
}

#include <iostream>

int main() {
    using namespace std;
    int n;
    cin >> n;
    if (n % 4 == 0){
        cout << "Високосный" << endl;
    } else {
        cout << "Не високосный" <<endl;
    }
    return 0;
}
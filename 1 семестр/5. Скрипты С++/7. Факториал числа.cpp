#include <iostream>

int main() {
    using namespace std;
    int n;
    long long answer = 1;
    cin >> n;
    if (n != 0){
        for (int i = 1; i <= n; i++){
            answer *= i;
        };
        
    } else {
        answer = 0;
    };
    cout << answer; 
    return 0;
}
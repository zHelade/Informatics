#include <iostream>

int main() {
    using namespace std;
    string n;
    string letters = "aeiouy";
    getline(cin, n);
    int c = 0;
    char t_l;
    for (char l : letters){
        t_l = tolower(l);
        for (char i : n){
            if (tolower(i) == t_l){
                c++;
            };
        };
        
    };
    
    cout << c << endl;
    return 0;
}

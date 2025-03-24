#include <iostream>
using namespace std;

int main() {
    double a, b;
    char c;
    cin >> a >> c >> b;
    if (c == '+') cout << a + b;
    else if (c == '-') cout << a - b;
    else if (c == '*') cout << a * b;
    else if (c == '/') {
        if (b == 0) cout << "Error";
        else cout << a / b;
    } else cout << "Invalid";
    return 0;
}

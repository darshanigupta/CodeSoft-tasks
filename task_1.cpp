#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    int a = rand() % 100 + 1, b;
    while (true) {
        cin >> b;
        if (b == a) {
            cout << "Correct";
            break;
        } else if (b < a) cout << "Too low" << endl;
        else cout << "Too high" << endl;
    }
    return 0;
}

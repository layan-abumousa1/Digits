#include <iostream>
using namespace std;

bool found(int x, int y) {
    while (x) {
        int d = x % 10;
        if (d == y) {
            return true;
        }
        x /= 10;
    }
    return false;
}
int main() {
    int x =5341, y = 3245;
    for (int i = 9; i >= 0; i--) {
        if (found(x, i) && found(y, i)) {
            cout << i;
            break;
        }
    }
}

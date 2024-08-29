#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter Number: ";
    cin >> x;

    while (x >= 10) {
        int sum = 0;
        while (x > 0) {
            sum += x % 10;
            x /= 10;
        }
        x = sum;
    }
    cout << x ;
}

#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter a positive number: ";
    cin >> num;
    int max1 = -1, max2 = -1;

    while (num ) {
        int d = num % 10;
        if (d > max1) {
            max2 = max1;
            max1 = d;
        }
        else if (d > max2 && d != max1) {
            max2 = d;
        }
        num /= 10;
    }
    cout << "Largest digit: " << max1 << ", Second largest digit: " << max2 << endl;
}
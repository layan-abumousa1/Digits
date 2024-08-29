#include <iostream>
using namespace std;

bool hasCommonDigit(int num1, int num2) {
    return (num1 / 10 == num2 / 10 || num1 / 10 == num2 % 10 ||
            num1 % 10 == num2 / 10 || num1 % 10 == num2 % 10);
}

int main() {
    int num1, num2;
    cout << "Input the first number: ";
    cin >> num1;
    cout << "Input the second number: ";
    cin >> num2;

    if (num1 < 25 || num1 > 75 || num2 < 25 || num2 > 75) {
        cout << "Numbers should be between 25 and 75." << endl;
    } else {
        cout << "Result: " << (hasCommonDigit(num1, num2) ? "true" : "false") << endl;
    }

}

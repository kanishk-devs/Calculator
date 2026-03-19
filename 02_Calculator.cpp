#include <iostream>
using namespace std;

int sum(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mul(int a, int b) {
    return a * b;
}

int quo(int a, int b) {
    return a / b;
}

int per(int a, int b) {
    return a % b;
}

int main() {
    cout << "Welcome to calculator\n";

    int x;
    int y;
    char z;

while (true) {
    cout << "Enter the operator (+, -, *, /, %):\n";
    cout << "/ is for quotient and % is for remainder and 0 to EXIT the program.\n";
    cin >> z;

    if (z == '0') 
    {
        return 0;
    }
    else
    {

    cout << "Enter the first number:\n";
    cin >> x;

    cout << "Enter the second number:\n";
    cin >> y;

    if (z == '+') {
        cout << "The sum is: " << sum(x, y) << "\n";
    }
    else if (z == '-') {
        cout << "The difference is: " << sub(x, y) << "\n";
    }
    else if (z == '*') {
        cout << "The product is: " << mul(x, y) << "\n";
    }
    else if (z == '/') {
        if (y == 0) {
            cout << "Division by zero is not allowed.\n";
        } else {
            cout << "The quotient is: " << quo(x, y) << "\n";
        }
    }
    else if (z == '%') {
        if (y == 0) {
            cout << "Division by zero is not allowed.\n";
        } else {
            cout << "The remainder is: " << per(x, y) << "\n";
        }
    }
    else {
        cout << "INVALID OPERATOR\n";
    }
    }
}
    return 0;
}

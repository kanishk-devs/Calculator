#include <iostream>
#include <string>
using namespace std;

int main() {
    cout << "Welcome to a calculator\n";

    int N1;
    int N2;
    char op; // op stands for the operator.

while (true) {
    cout << "Enter the first number:\n";
    cin >> N1;
    cout << "Enter the second number:\n";
    cin >> N2;
    cout << "Enter the required arithmetic operator [ + , - , * , / , % ( / is for quotient while % is for remainder)\nAND 0 for exitting the program.] :\n"; 
    cin >> op;

    if (op == '0') {
            cout << "Exiting calculator...\n";
            break;
    }
    if (op == '+')
    {
        cout << "The sum is: " << N1 + N2 << "\n"; 
    }
    else if (op == '-')
    {
        cout << "The difference is: " << N1 - N2 << "\n";
    }
    else if (op == '*')
    {
        cout << "The Product is: " << N1*N2 << "\n";
    }
    else if (op == '/')
    {
        if (N2 != 0)
        {
            cout << "The Quotient is: " << (double)N1 / N2 << "\n";
        }
        else
        {
            cout << "Error: Division by zero!\n";
        }
    }
    else if (op == '%')
    {
        if (N2 != 0)
        {
            cout << "The Remainder is: " << N1 % N2 << "\n";
        }
        else
        {
            cout << "Error: Division by zero!\n";
        }
    }
    else 
    {
        cout << "Invalid Operator";
    }
}
    return 0;
}
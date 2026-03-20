#include<iostream>
using namespace std;

int findPower(int m, int n) {
    if (n == 0) {
        return 1; // Any number to the power of 0 is 1
    } else {
        return m * findPower(m, n - 1);
    }
}

int sumSquare(int n) {
    if (n == 0) {
        return 0; // The sum of squares of first 0 integers is 0
    } else {
        return n * n + sumSquare(n - 1);
    }
}

int findDigits(int number) {
    if (number == 0) {
        return 0; 
    } else {
        int lastDigit = number % 10; 
        return lastDigit + findDigits(number / 10);
    }
}

int main() {
    cout << "a. Calculate m to the power of n" << endl;
    int m, n;
    cout << "Enter m: ";
    cin >> m;
    cout << "Enter n: ";
    cin >> n;

    int resultA = findPower(m, n);
    cout << m << " to the power of " << n << " is: " << resultA << endl;
    cout << "================================" << endl;

    cout << "b. Calculate sum of square of first n integers (1 to n)" << endl;
    cout << "Enter n: ";
    cin >> n;
    int sum = sumSquare(n);
    cout << "The sum of squares of first " << n << " integers is: " << sum << endl;
    cout << "================================" << endl;

    cout << "c. Sum digits of a number" << endl;
    int number;
    cout << "Enter a number: ";
    cin >> number;
    int digits = findDigits(number);
    cout << "The sum of digits of " << number << " is: " << digits << endl;
    cout << "================================" << endl;
}
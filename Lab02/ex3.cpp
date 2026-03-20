#include<iostream>
using namespace std;

int displayStar(int n) {
    if (n == 0) {
        return 0;
    } else {
        cout << "*";
        return displayStar(n - 1);
    }
}

int displayNumber(int m) {
    if (m == 0) {
        return 0;
    } else {
        cout << m << " ";
        return displayNumber(m - 1);
    }
}

int main() {
    int n;
    cout << "Enter number of star (*): ";
    cin >> n;

    int draw = displayStar(n);
    cout << endl;

    int m;
    cout << "Enter numbers to display from n to 1: ";
    cin >> m;

    int number = displayNumber(m);
}
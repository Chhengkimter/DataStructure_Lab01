#include <iostream>
using namespace std;

int findOdd(int n) {
    if (n <= 0) {
        return 0;
    } else {
        if (n % 2 != 0) {
            cout << n << endl;
        }
        return findOdd(n - 1);
    }
}
int main() {
    int n;
    cout << "Enter a number:";
    cin >> n;

    int odd = findOdd(n);
}
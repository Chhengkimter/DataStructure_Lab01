#include<iostream>
using namespace std;

int minusOne(int n, int sum) {
    if (n != -1) {
        cout << "Enter a number: ";
        cin >> n;
        sum += n;
        return minusOne(n, sum);
    } else {
        cout << "Total = " << sum << endl;
        return 0;
    }
}
int main() {
    int n = 0;
    int sum = 0;
    minusOne(n, sum);
}
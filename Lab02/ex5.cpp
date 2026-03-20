#include<iostream>
#include<array>
using namespace std;

int findSum(int array[], int n) {
    if (n == 0) {
        return 0;
    } else {
        return array[n - 1] + findSum(array, n - 1);
    }
}
int main() {
    int n;
    cout << "Enter the size of the array:" << endl;
    cin >> n;
    int array[n];

    for (int i=0; i < n; i++) {
        cout << "Enter index " << i << ":" << endl;
        cin >> array[i];
    }

    int sum = findSum(array, n);
    cout << "The sum of the array is: " << sum << endl;
}
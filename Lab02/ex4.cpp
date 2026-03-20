#include <iostream>
#include <string>
#include <array>
using namespace std;

int findMin(int array[], int n){
    if (n == 1) {
        return array[0];
    } else {
        // Recursively find min of first n-1 elements
        int minRest = findMin(array, n - 1);
        
        // Compare with the last element
        if (array[n - 1] < minRest) {
            return array[n - 1];
        } else {
            return minRest;
        }
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

    int min = findMin(array, n);
    cout << "The minimum value in the array is: " << min << endl;
}
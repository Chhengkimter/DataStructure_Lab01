#include<iostream>
using namespace std;

int main(){
    
    int n;

    cout << "Enter a number: ";
    cin >> n;

    int *ptr = &n;
    int num = *ptr +7;

    cout << "The value of the number is: " << num << endl;

    return 0;
}
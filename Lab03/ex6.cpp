#include<iostream>
using namespace std;

int main(){
    
    float num[7];
    float *ptr[7];

    cout << "Enter 7 numbers: " << endl;

    for(int i = 0; i < 7; i++){
        cin >> num[i];
        ptr[i] = &num[i];
    }

    cout << "The array is: " << endl;
    for(int i = 0; i < 7; i++){
        cout << *ptr[i] << " ";
    }

    return 0;
}

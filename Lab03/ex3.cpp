#include<iostream>
using namespace std;

void exchange(float *a, float *b){

    float *ptr1 = a;
    float *ptr2 = b;
    float temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    
}
int main(){
    
    float a = 5;
    float b = 10;

    exchange(&a, &b);

    cout << a << endl;
    cout << b << endl;

    return 0;
}
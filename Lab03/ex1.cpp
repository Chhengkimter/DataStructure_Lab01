#include<iostream>
using namespace std;

int main(){
    
    int n1 = 7;
    int n2 = 3;
    int n3 = 15;

    int *ptr1 = &n1;
    int *ptr2 = &n2;
    int *ptr3 = &n3;

    cout << *ptr1 << endl;
    cout << *ptr2 << endl;
    cout << *ptr3 << endl;

    *ptr3 = *ptr1 + *ptr2;
    
    cout << *ptr3 << endl;

    return 0;
}

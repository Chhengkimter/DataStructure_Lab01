#include<iostream>
using namespace std;

void sum1(double *sum, int n){
    *sum = 0;
    for(int i = 1; i <= n; i++){
        *sum += 1.0/(i*i);
    }
    
}
int main(){
    
    double result;
    int n;

    cout << "Enter n: ";
    cin >> n;
    
    sum1(&result, n);
    cout << result << endl;

    return 0;
}
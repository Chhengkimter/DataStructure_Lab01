#include<iostream>
#include<cmath>
using namespace std;


void solveEquation(int a, int b, int c, float *x1, float *x2, float *delta){

    *delta = (float)b*b - 4*a*c;

    if(*delta>0){
        *x1 = (-b + sqrt(*delta)) / (2*a); 
        *x2 = (-b - sqrt(*delta)) / (2*a);
    } else if(*delta==0){
        *x1 = -b / (2*a);
    } else {
        cout << "No real roots" << endl;
    }

}
int main(){
    
    int a,b,c;
    do {
        cout << "Enter a: ";
        cin >> a;
        
        if(a<=0){
            cout << "a must be greater than 0" << endl;
        } 
        
    } while(a<=0);

    cout << "Enter b: ";
    cin >> b;

    cout << "Enter c: ";
    cin >> c;
    
    float x1, x2, delta;
    solveEquation(a, b, c, &x1, &x2, &delta);
    
    cout << delta << endl;

    if (delta>0){
        cout << "Roots are real and different: " << x1 << " and " << x2 << endl;
    } else if (delta==0){
        cout << "Roots are real and same: " << x1 << endl;
    } else {
        cout << "Roots are complex and different." << endl;
    }

    return 0;
}
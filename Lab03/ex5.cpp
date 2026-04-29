#include<iostream>
#include<array>
using namespace std;

void findMaxMin(int *arr, int *max, int *min){

    for(int i = 0; i < 7; i++){
        if(arr[i] > *max){
            *max = arr[i];
        }
        if(arr[i] < *min){
            *min = arr[i];
        }
    }
}

int main(){
    
    int arr[7];
    int max;
    int min;
    cout << "Enter 7 integer numbers and store in an array:" << endl;
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4] >> arr[5] >> arr[6];

    findMaxMin(arr, &max, &min);

    cout << "The maximum number in the array is: " << max << endl;
    cout << "The minimum number in the array is: " << min << endl;

    return 0;
}
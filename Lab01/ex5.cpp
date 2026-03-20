#include <iostream>
#include <string>

int main() {

    int input;
    std::cout << "Enter minutes:" << std::endl;
    std::cin >> input;

    int hours = input/60;
    int minutes = input%60;
    int seconds = minutes%60;

    std::cout << hours << ":" << minutes << ":" << seconds << std::endl;    
    return 0;
}
#include <iostream>
#include <string>

int main() {

    int n;
    while(true) {
        std::cout << "Enter a number greater than 50:" << std::endl;
        std::cin >> n;
        if (n > 50) {
            break;
        } else {
            std::cout << "Number must be greater than 50." << std::endl;
        }
    }

    for (int i = 1; i <= n; i++) {
        if (i==10 || i==30) continue;
        
        std::cout << i << std::endl;
        
    }

    return 0;
}
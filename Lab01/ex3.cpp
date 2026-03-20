#include <iostream>
#include <string>

int main() {
    std::string name;
    std::string gender;
    int salary;
    double tax;
    
    std::cout << "Enter your name:" << std::endl;
    std::cin >> name;
    std::cout << "Enter your gender(M/F):" << std::endl;
    std::cin >> gender;
    std::cout << "Enter your salary:" << std::endl;
    std::cin >> salary;
    
    if (gender == "M") {
        if (salary >= 1000) {
            tax = salary * 0.095;
        } else if (salary >= 500) {
            tax = salary * 0.07;
        } else if (salary >= 300) {
            tax = salary * 0.05;
        } else {
            tax = 0;
        }
    } else if (gender == "F") {
        if (salary >= 1000) {
            tax = salary * 0.08;
        } else if (salary >= 500) {
            tax = salary * 0.065;
        } else if (salary >= 300) {
            tax = salary * 0.035;
        } else {
            tax = 0;
        }
    }

    std::cout << "Hello, " << name << "! your salary is " << salary << " and your tax is " << tax << "!" << std::endl;
    return 0;
}
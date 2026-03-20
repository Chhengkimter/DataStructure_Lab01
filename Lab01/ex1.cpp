#include <iostream>
#include <string>
int main() {
    std::string name;
    std::string major;
    int age;
    std::string gender;

    std::cout << "Enter your name:" << std::endl;
    std::cin >> name;
    std::cout << "Enter your gender(M/F):" << std::endl;
    std::cin >> gender;
    std::cout << "Enter your major:" << std::endl;
    std::cin >> major;
    std::cout << "Enter your age:" << std::endl;
    std::cin >> age;

    if (gender == "M") {
        std::cout << "Hello, Mr. " << name << "! your age is " << age << " and you learn " << major << "!" << std::endl; 
        if (age >= 18) {
            std::cout << "You are legible to vote." << std::endl;
        } else {
            std::cout << "You are not legible to vote." << std::endl;
        }
    } else if (gender == "F") {
        std::cout << "Hello, Ms. " << name << "! your age is " << age << " and you learn " << major << "!" << std::endl; 
        if (age >= 18) {
            std::cout << "You are legible to vote." << std::endl;
        } else {
            std::cout << "You are not legible to vote." << std::endl;
        }
    }

    return 0;
}
#include <iostream>
#include <cmath>

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9/5) + 32;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5/9;
}

void findQuadraticRoots(double a, double b, double c) {
    double discriminant = b*b - 4*a*c;
    if (discriminant > 0) {
        double root1 = (-b + sqrt(discriminant)) / (2*a);
        double root2 = (-b - sqrt(discriminant)) / (2*a);
        std::cout << "Roots are real and different: " << root1 << " and " << root2 << std::endl;
    } else if (discriminant == 0) {
        double root = -b / (2*a);
        std::cout << "Roots are real and same: " << root << std::endl;
    } else {
        std::cout << "Roots are complex and different." << std::endl;
    }
}

double computeBMI(double weight, double height) {
    return weight / (height * height);
}

int sumExceptMultiplesOf3(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        if (i % 3 != 0) {
            sum += i;
        }
    }
    return sum;
}
int main() {
    std::cout << "What would you like to do?(Enter the number)" << std::endl;
    std::cout << "1. Celsius to Fahrenheit" << std::endl;
    std::cout << "2. Fahrenheit to Celsius" << std::endl;
    std::cout << "3. Find root of quadratic equation" << std::endl;
    std::cout << "4. Compute BMI of a person" << std::endl;
    std::cout << "5. Sum of numbers from 1 to n except those divisible by 3" << std::endl;

    int choice;
    std::cin >> choice;

    switch(choice) {
        case 1: {
            std::cout << "Enter temperature in Celsius:" << std::endl;
            double celsius;
            std::cin >> celsius;
            double fahrenheit = celsiusToFahrenheit(celsius);
            std::cout << "Temperature in Fahrenheit: " << fahrenheit << std::endl;
            break;    
        }    
        
        case 2: {
            std::cout << "Enter temperature in Fahrenheit:" << std::endl;
            double fahrenheitInput;
            std::cin >> fahrenheitInput;
            double celsiusOutput = fahrenheitToCelsius(fahrenheitInput);
            std::cout << "Temperature in Celsius: " << celsiusOutput << std::endl;
            break;
        }

        case 3: {
            std::cout << "Enter coefficients a, b and c for the equation ax^2 + bx + c = 0:" << std::endl;
            double a, b, c;
            std::cin >> a >> b >> c;
            findQuadraticRoots(a, b, c);
            break;
        }

        case 4: {
            std::cout << "Enter weight in kilograms:" << std::endl;
            double weight;
            std::cin >> weight;
            std::cout << "Enter height in meters:" << std::endl;
            double height;
            std::cin >> height;
            double bmi = computeBMI(weight, height);
            std::cout << "BMI is: " << bmi << std::endl;
            break;
        }

        case 5: {
            std::cout << "Enter a number n:" << std::endl;
            int n;
            std::cin >> n;
            int sum = sumExceptMultiplesOf3(n);
            std::cout << "Sum of numbers from 1 to " << n << " except those divisible by 3 is: " << sum << std::endl;
            break;
        }
    }

    return 0;
}
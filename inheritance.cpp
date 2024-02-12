#include <iostream>
#include <math.h>
class Utility
{
public:
    static double getNumber()
    {
        double number;
        std::cout << "Enter a number: ";
        std::cin >> number;
        return number;
    }
};

class SimpleCalculator
{
public:
    double num1, num2;

    SimpleCalculator()
    {
        num1 = Utility::getNumber();
        num2 = Utility::getNumber();
    }

    void performOperations()
    {
        double addition = num1 + num2;
        double subtraction = num1 - num2;
        double multiplication = num1 * num2;
        double division = num1 / num2;

        std::cout << "Addition: " << addition << std::endl;
        std::cout << "Subtraction: " << subtraction << std::endl;
        std::cout << "Multiplication: " << multiplication << std::endl;
        std::cout << "Division: " << division << std::endl;
    }
};

class ScientificCalculator
{
public:
    double num1, num2;

    ScientificCalculator()
    {
        num1 = Utility::getNumber();
        num2 = Utility::getNumber();
    }

    void performOperations()
    {
        double power = pow(num1, num2);
        double squareRoot = sqrt(num1);
        double cubeRoot = cbrt(num1);
        double sine = sin(num1);

        std::cout << "Power: " << power << std::endl;
        std::cout << "Square Root: " << squareRoot << std::endl;
        std::cout << "Cube Root: " << cubeRoot << std::endl;
        std::cout << "Sine: " << sine << std::endl;
    }
};

class HybridCalculator : public SimpleCalculator, public ScientificCalculator
{
public:
    HybridCalculator() : SimpleCalculator(), ScientificCalculator() {}

    void performOperations()
    {
        SimpleCalculator::performOperations();
        ScientificCalculator::performOperations();
    }
};

int main()
{
    HybridCalculator hybridCalculator;
    hybridCalculator.performOperations();
    return 0;
}

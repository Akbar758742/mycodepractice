#include <iostream>
#include <cmath>

class Calculator {
private:
    double result;
    double mem;

    double parseInput(const std::string& input) const;

public:
    Calculator();

    void add();
    void subtract();
    void multiply();
    void divide();
    void square();
    void calculateSquareRoot();
    void setMem();
    void printMem() const;
    void welcome() const;
    void parseOperation(const std::string& input);
};

Calculator::Calculator() : result(0.0), mem(0.0) {}

double Calculator::parseInput(const std::string& input) const {
    if (input == "result") {
        return result;
    } else if (input == "mem") {
        return mem;
    } else {
        return std::stod(input);
    }
}

void Calculator::add() {
    std::string a, b;
    std::cout << "Enter the first number: ";
    std::cin >> a;
    std::cout << "Enter the second number: ";
    std::cin >> b;
    result = parseInput(a) + parseInput(b);
    std::cout << "The result is " << result << std::endl;
}

void Calculator::subtract() {
    std::string a, b;
    std::cout << "Enter the first number: ";
    std::cin >> a;
    std::cout << "Enter the second number: ";
    std::cin >> b;
    result = parseInput(a) - parseInput(b);
    std::cout << "The result is " << result << std::endl;
}

void Calculator::multiply() {
    std::string a, b;
    std::cout << "Enter the first number: ";
    std::cin >> a;
    std::cout << "Enter the second number: ";
    std::cin >> b;
    result = parseInput(a) * parseInput(b);
    std::cout << "The result is " << result << std::endl;
}

void Calculator::divide() {
    std::string a, b;
    std::cout << "Enter the first number: ";
    std::cin >> a;
    std::cout << "Enter the second number: ";
    std::cin >> b;
    if (parseInput(b) != 0.0) {
        result = parseInput(a) / parseInput(b);
        std::cout << "The result is " << result << std::endl;
    } else {
        std::cout << "Error: Cannot divide by zero." << std::endl;
    }
}

void Calculator::square() {
    std::string a;
    std::cout << "Enter a number: ";
    std::cin >> a;
    result = parseInput(a) * parseInput(a);
    std::cout << "The result is " << result << std::endl;
}

void Calculator::calculateSquareRoot() {
    std::string a;
    std::cout << "Enter a number: ";
    std::cin >> a;
    if (parseInput(a) >= 0.0) {
        result = std::sqrt(parseInput(a));
        std::cout << "The result is " << result << std::endl;
    } else {
        std::cout << "Error: Cannot calculate square root of a negative number." << std::endl;
    }
}

void Calculator::setMem() {
    std::string a;
    std::cout << "Enter a number: ";
    std::cin >> a;
    mem = parseInput(a);
    std::cout << "The mem is " << mem << std::endl;
}

void Calculator::printMem() const {
    std::cout << "The mem is " << mem << std::endl;
}

void Calculator::welcome() const {
    std::cout << "\nEnter an operation (+, -, /, *, sqrt, square, setmem, printmem) or exit" << std::endl;
}

void Calculator::parseOperation(const std::string& input) {
    if (input == "+" || input == "add" || input == "addition" || input == "sum") {
        add();
    } else if (input == "-" || input == "sub" || input == "subtraction" || input == "minus") {
        subtract();
    } else if (input == "/" || input == "div" || input == "divide") {
        divide();
    } else if (input == "*" || input == "mul" || input == "multiply" || input == "times") {
        multiply();
    } else if (input == "sqrt" || input == "squareroot") {
        calculateSquareRoot();
    } else if (input == "square") {
        square();
    } else if (input == "setmem") {
        setMem();
    } else if (input == "printmem") {
        printMem();
    } else {
        std::cout << "Invalid operation. Please try again." << std::endl;
    }
}

int main() {
    Calculator calculator;
    std::string input;

    while (input != "exit") {
        calculator.welcome();
        std::cin >> input;
        calculator.parseOperation(input);
    }

    return 0;
}

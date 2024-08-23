#include <iostream>

int main( ) {
  double num1, num2, num3;
  char operation;
  std::cout << "Enter the first number: ";
  std::cin >> num1;

  std::cout << "Enter operation: ";
  std::cin >> operation;

  std::cout << "Enter the second number: ";
  std::cin >> num2;
  std::cout << "Enter operation: ";
  std::cin >> operation;

  std::cout << "Enter the third number: ";
  std::cin >> num3;

  if (operation == '+') {
    std::cout << num1 + num2 + num3;
  }
  double result = 0.0;

  switch (operation) { 
    case '+':
      result = num1 + num2 + num3;
      break;
    default:
      std::cout << "Result: " << result << std::endl;
      return 0;
  }
}
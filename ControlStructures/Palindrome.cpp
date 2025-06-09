#include <iostream>

//#define PALINDROME

bool isPalindrome(int number) {
    int originalNumber = number;
    int reversedNumber = 0;

    while (number > 0) {
        reversedNumber = reversedNumber * 10 + number % 10;
        number /= 10;
    }

    return originalNumber == reversedNumber;
}

#ifdef PALINDROME
int main() 
{
    setlocale(LC_ALL, "Russian");
    int number;

    std::cout << "Введите число: ";
    std::cin >> number;

    if (isPalindrome(number)) {
        std::cout << "Число " << number << " является палиндромом." << std::endl;
    }
    else {
        std::cout << "Число " << number << " не является палиндромом." << std::endl;
    }
}
#endif
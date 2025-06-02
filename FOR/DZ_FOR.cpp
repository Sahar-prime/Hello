#include <iostream>
using namespace std;
////2
//unsigned long long factorial(int n) 
//{
//    if (n == 0) return 1;
//    unsigned long long result = 1;
//    for (int i = 1; i <= n; ++i) 
//    {
//        result *= i;
//    }
//    return result;
//}
//
//int main() 
//{
//    setlocale(LC_ALL, "");
//    int number;
//    cout << "¬ведите число дл€ вычислени€ факториала: ";
//    cin >> number;
//    cout << "‘акториал " << number << " равен " << factorial(number) << endl;
//    return 0;
//}
//
////3
//long long power(int base, int exponent)
//{
//    long long result = 1;
//    for (int i = 0; i < exponent; ++i) 
//    {
//        result *= base;
//    }
//    return result;
//}
//
//int main() 
//{
//    setlocale(LC_ALL, "");
//    int base, exponent;
//    cout << "¬ведите основание степени: ";
//    cin >> base;
//    cout << "¬ведите показатель степени: ";
//    cin >> exponent;
//    cout << base << " в степени " << exponent << " равно " << power(base, exponent) << endl;
//    return 0;
//}
//
////4
//void print_ascii_table() {
//    for (int i = 32; i < 128; ++i) 
//    {
//        cout << char(i) << " ";
//        if ((i - 31) % 16 == 0)
//        {
//            cout << endl;
//        }
//    }
//}
//
//int main()
//{
//    setlocale(LC_ALL, "");
//    print_ascii_table();
//    return 0;
//}
//
////5
//void fibonacci_up_to(int limit) 
//{
//    int a = 0, b = 1;
//    while (a <= limit) 
//    {
//        cout << a << " ";
//        int next = a + b;
//        a = b;
//        b = next;
//    }
//    cout << endl;
//}
//
//int main() 
//{
//    setlocale(LC_ALL, "");
//    int limit;
//    cout << "¬ведите предел дл€ р€да ‘ибоначчи: ";
//    cin >> limit;
//    fibonacci_up_to(limit);
//    return 0;
//}
//
////6
//void fibonacci_n_numbers(int n) 
//{
//    int a = 0, b = 1;
//    for (int i = 0; i < n; ++i)
//    {
//        cout << a << " ";
//        int next = a + b;
//        a = b;
//        b = next;
//    }
//    cout << endl;
//}
//
//int main() 
//{
//    setlocale(LC_ALL, "");
//    int n;
//    cout << "¬ведите количество чисел из р€да ‘ибоначчи: ";
//    cin >> n;
//    fibonacci_n_numbers(n);
//    return 0;
//}
//
////7
//bool is_prime(int num) 
//{
//    if (num <= 1) return false;
//    for (int i = 2; i <= sqrt(num); ++i) 
//    {
//        if (num % i == 0) return false;
//    }
//    return true;
//}
//
//void print_primes_up_to(int limit)
//{
//    for (int num = 2; num <= limit; ++num) 
//    {
//        if (is_prime(num))
//        {
//            cout << num << " ";
//        }
//    }
//    cout << endl;
//}
//
//int main() 
//{
//    setlocale(LC_ALL, "");
//    int limit;
//    cout << "¬ведите предел дл€ р€да простых чисел: ";
//    cin >> limit;
//    print_primes_up_to(limit);
//    return 0;
//}

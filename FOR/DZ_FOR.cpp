#include <iostream>
using namespace std;

//#define TASK_2
//#define TASK_3
//#define TASK_4
//#define TASK_5
//#define TASK_6
//#define TASK_7

#ifdef TASK_2
unsigned long long factorial(int n) 
{
    if (n == 0) return 1;
    unsigned long long result = 1;
    for (int i = 1; i <= n; ++i) 
    {
        result *= i;
    }
    return result;
}

int main() 
{
    setlocale(LC_ALL, "");
    int number;
    cout << "Введите число для вычисления факториала: ";
    cin >> number;
    cout << "Факториал " << number << " равен " << factorial(number) << endl;
    return 0;
}
#endif //TASK_2

#ifdef TASK_3
long long power(int base, int exponent)
{
    long long result = 1;
    for (int i = 0; i < exponent; ++i) 
    {
        result *= base;
    }
    return result;
}

int main() 
{
    setlocale(LC_ALL, "");
    int base, exponent;
    cout << "Введите основание степени: ";
    cin >> base;
    cout << "Введите показатель степени: ";
    cin >> exponent;
    cout << base << " в степени " << exponent << " равно " << power(base, exponent) << endl;
}
#endif //TASK_3

#ifdef TASK_4
void print_ascii_table() {
    for (int i = 32; i < 128; ++i) 
    {
        cout << char(i) << " ";
        if ((i - 31) % 16 == 0)
        {
            cout << endl;
        }
    }
}

int main()
{
    setlocale(LC_ALL, "");
    print_ascii_table();
}
#endif //TASK_4

#ifdef TASK_5
void fibonacci_up_to(int limit) 
{
    int a = 0, b = 1;
    while (a <= limit) 
    {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
}

int main() 
{
    setlocale(LC_ALL, "");
    int limit;
    cout << "Введите предел для ряда Фибоначчи: ";
    cin >> limit;
    fibonacci_up_to(limit);
    return 0;
}
#endif //TASK_5

#ifdef TASK_6
void fibonacci_n_numbers(int n) 
{
    int a = 0, b = 1;
    for (int i = 0; i < n; ++i)
    {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }
    cout << endl;
}

int main() 
{
    setlocale(LC_ALL, "");
    int n;
    cout << "Введите количество чисел из ряда Фибоначчи: ";
    cin >> n;
    fibonacci_n_numbers(n);
}
#endif //TASK_6

#ifdef TASK_7
bool is_prime(int num) 
{
    if (num <= 1) return false;
    for (int i = 2; i <= sqrt(num); ++i) 
    {
        if (num % i == 0) return false;
    }
    return true;
}

void print_primes_up_to(int limit)
{
    for (int num = 2; num <= limit; ++num) 
    {
        if (is_prime(num))
        {
            cout << num << " ";
        }
    }
    cout << endl;
}

int main() 
{
    setlocale(LC_ALL, "");
    int limit;
    cout << "Введите предел для ряда простых чисел: ";
    cin >> limit;
    print_primes_up_to(limit);
    return 0;
}
#endif //TASK_7
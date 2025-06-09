#include <iostream>
using namespace std;

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
//    cout << "Введите предел для ряда Фибоначчи: ";
//    cin >> limit;
//    fibonacci_up_to(limit);
//    return 0;
//}

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
//    cout << "Введите количество чисел из ряда Фибоначчи: ";
//    cin >> n;
//    fibonacci_n_numbers(n);
//    return 0;
//}

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
//    cout << "Введите предел для ряда простых чисел: ";
//    cin >> limit;
//    print_primes_up_to(limit);
//    return 0;
//}

//bool isPerfect(int num)
//{
//    if (num <= 1) {
//        return false; // Совершенные числа начинаются с 6
//    }
//
//    int sum = 1; // 1 является собственным делителем для всех чисел > 1
//    for (int i = 2; i * i <= num; ++i) {
//        if (num % i == 0) {
//            sum += i;
//            if (i != num / i) // Избегаем повторного добавления для квадратных корней
//            {
//                sum += num / i;
//            }
//        }
//    }
//    return sum == num;
//}
//
//int main()
//{
//    setlocale(LC_ALL, "");
//    int limit;
//    cout << "Введите предел для поиска совершенных чисел: ";
//    cin >> limit;
//
//    cout << "Совершенные числа до " << limit << ":\n";
//    for (int num = 2; num <= limit; ++num) {
//        if (isPerfect(num)) {
//            cout << num << "\n";
//        }
//    }
//
//    return 0;
//}

//int main() 
//{
//    setlocale(LC_ALL, "");
//    const int size = 10; // Размер таблицы (10x10)
//
//    // Заголовок таблицы
//    std::cout << "Таблица Пифагора:\n";
//    std::cout << "   |";
//    for (int i = 1; i <= size; ++i) {
//        std::cout << " " << i << " |";
//    }
//    std::cout << "\n";
//
//    // Разделительная линия
//    std::cout << "----";
//    for (int i = 1; i <= size; ++i) {
//        std::cout << "----";
//    }
//    std::cout << "\n";
//
//    // Заполнение таблицы
//    for (int i = 1; i <= size; ++i) {
//        std::cout << " " << i << "|";
//        for (int j = 1; j <= size; ++j) {
//            // Форматирование вручную
//            if (i * j < 10) {
//                std::cout << "  " << i * j << " |";
//            }
//            else if (i * j < 100) {
//                std::cout << " " << i * j << " |";
//            }
//            else {
//                std::cout << i * j << " |";
//            }
//        }
//        std::cout << "\n";
//    }
//
//    return 0;
//}

//void printSquare(int size) {
//    for (int i = 0; i < size; ++i) {
//        for (int j = 0; j < size; ++j) {
//            std::cout << "* ";
//        }
//        std::cout << "\n";
//    }
//    std::cout << "\n";
//}
//
//void printRightTriangle(int size) {
//    for (int i = 1; i <= size; ++i) {
//        for (int j = 0; j < i; ++j) {
//            std::cout << "* ";
//        }
//        std::cout << "\n";
//    }
//    std::cout << "\n";
//}
//
//void printInvertedRightTriangle(int size) {
//    for (int i = size; i >= 1; --i) {
//        for (int j = 0; j < i; ++j) {
//            std::cout << "* ";
//        }
//        std::cout << "\n";
//    }
//    std::cout << "\n";
//}
//
//void printInvertedLeftTriangle(int size) {
//    for (int i = size; i >= 1; --i) {
//        for (int j = 0; j < size - i; ++j) {
//            std::cout << "  ";
//        }
//        for (int j = 0; j < i; ++j) {
//            std::cout << "* ";
//        }
//        std::cout << "\n";
//    }
//    std::cout << "\n";
//}
//
//void printDiamond(int size) {
//    for (int i = 1; i <= size; ++i) {
//        for (int j = 0; j < size - i; ++j) {
//            std::cout << "  ";
//        }
//        for (int j = 0; j < i; ++j) {
//            std::cout << "* ";
//        }
//        std::cout << "\n";
//    }
//    for (int i = size - 1; i >= 1; --i) {
//        for (int j = 0; j < size - i; ++j) {
//            std::cout << "  ";
//        }
//        for (int j = 0; j < i; ++j) {
//            std::cout << "* ";
//        }
//        std::cout << "\n";
//    }
//    std::cout << "\n";
//}
//
//void printTriangle(int size) {
//    for (int i = 0; i < size; ++i) {
//        for (int j = 0; j < size - i - 1; ++j) {
//            std::cout << " ";
//        }
//        for (int j = 0; j < 2 * i + 1; ++j) {
//            if (j == 0 || j == 2 * i) {
//                std::cout << "/";
//            }
//            else {
//                std::cout << " ";
//            }
//        }
//        std::cout << "\n";
//    }
//    for (int i = size - 2; i >= 0; --i) {
//        for (int j = 0; j < size - i - 1; ++j) {
//            std::cout << " ";
//        }
//        for (int j = 0; j < 2 * i + 1; ++j) {
//            if (j == 0 || j == 2 * i) {
//                std::cout << "\\";
//            }
//            else {
//                std::cout << " ";
//            }
//        }
//        std::cout << "\n";
//    }
//    std::cout << "\n";
//}
//
//int main() 
//{
//    setlocale(LC_ALL, "");
//    int size;
//    std::cout << "Введите размер фигуры: ";
//    std::cin >> size;
//
//    printSquare(size);
//    printRightTriangle(size);
//    printInvertedRightTriangle(size);
//    printInvertedLeftTriangle(size);
//    printDiamond(size);
//    printTriangle(size);
//
//    return 0;
//}
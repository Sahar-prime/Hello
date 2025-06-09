#include <iostream>
using namespace std;

void decimalToHex(int decimalNumber)
{
    if (decimalNumber == 0) 
    {
        cout << "0";
        return;
    }

    char hexDigits[] = "0123456789ABCDEF";
    char hexNumber[32];
    int index = 0;

    while (decimalNumber > 0) 
    {
        int remainder = decimalNumber % 16;
        hexNumber[index++] = hexDigits[remainder];
        decimalNumber /= 16;
    }

    // Вывод результата в обратном порядке
    for (int i = index - 1; i >= 0; i--) 
    {
        cout << hexNumber[i];
    }
}

int main()
{
    setlocale(LC_ALL, "");
    int decimalNumber;

    // Запрос ввода числа у пользователя
    cout << "Введите десятичное число: ";
    cin >> decimalNumber;

    // Вывод шестнадцатеричного представления числа
    cout << "Шестнадцатеричное представление: ";
    decimalToHex(decimalNumber);
    cout << std::endl;

    return 0;
}
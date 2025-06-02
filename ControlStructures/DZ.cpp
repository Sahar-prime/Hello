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

    // ����� ���������� � �������� �������
    for (int i = index - 1; i >= 0; i--) 
    {
        cout << hexNumber[i];
    }
}

int main()
{
    setlocale(LC_ALL, "");
    int decimalNumber;

    // ������ ����� ����� � ������������
    cout << "������� ���������� �����: ";
    cin >> decimalNumber;

    // ����� ������������������ ������������� �����
    cout << "����������������� �������������: ";
    decimalToHex(decimalNumber);
    cout << std::endl;

    return 0;
}
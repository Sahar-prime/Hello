#include <iostream>
using namespace std;

// ������� ��� ��������, �������� �� ����� �������
bool isPrime(int n) 
{
    if (n <= 1) 
    {
        return false;
    }
    if (n <= 3) 
    {
        return true;
    }
    if (n % 2 == 0 || n % 3 == 0) 
    {
        return false;
    }
    for (int i = 5; i * i <= n; i += 6)
    {
        if (n % i == 0 || n % (i + 2) == 0) 
        {
            return false;
        }
    }
    return true;
}

// ������� ��� ��������, �������� �� ����� �����������
bool isPerfect(int n)
{
    if (n <= 1) 
    {
        return false;
    }

    int sum = 1; // 1 �������� ����������� ��������� ��� ������ n > 1
    for (int i = 2; i * i <= n; ++i)
    {
        if (n % i == 0)
        {
            sum += i;
            if (i != n / i) 
            {
                sum += n / i;
            }
        }
    }
    return sum == n;
}

int m() 
{
    setlocale(LC_ALL, "");
    int limit; // ����������� ��� ������ ����������� �����
    cout << "������� ������: "; cin >> limit;
    cout << "����������� ����� �� " << limit << ":\n";

    for (int p = 2; p <= 30; ++p) 
    { // ��������� ����� ������� �� p=30
        int mersenne = (1 << p) - 1; // 2^p - 1
        if (isPrime(mersenne))
        {
            int perfectNumber = (1 << (p - 1)) * mersenne; // 2^(p-1) * (2^p - 1)
            if (perfectNumber <= limit && isPerfect(perfectNumber))
            {
                cout << perfectNumber << "\n";
            }
        }
    }
    return 0;

}
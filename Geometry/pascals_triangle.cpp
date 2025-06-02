#include <iostream>

using namespace std;

void printPascalTriangle(int depth)
{
    // Создаем двумерный массив для хранения треугольника
    int** triangle = new int* [depth];

    for (int i = 0; i < depth; ++i) 
    {
        triangle[i] = new int[i + 1];
        triangle[i][0] = triangle[i][i] = 1; // Первое и последнее значение в строке всегда 1

        for (int j = 1; j < i; ++j) 
        {
            triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
        }
    }

    // Выводим треугольник на экран
    for (int i = 0; i < depth; ++i)
    {
        for (int j = 0; j <= i; ++j)
        {
            cout << triangle[i][j] << " ";
        }
        cout << endl;
    }

    // Освобождаем память
    for (int i = 0; i < depth; ++i) 
    {
        delete[] triangle[i];
    }
    delete[] triangle;
}

int main()
{
    setlocale(LC_ALL, "");
    int depth;
    cout << "Введите глубину треугольника Паскаля: ";
    cin >> depth;

    printPascalTriangle(depth);

    return 0;
}

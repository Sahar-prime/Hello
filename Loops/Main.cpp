#include <iostream>
#include <conio.h>
using namespace std;

//#define LOOPS

//#define WHILE_1
//#define WHILE_2

#ifdef LOOPS
void main()
{
	setlocale(LC_ALL, "Russian");

#ifdef WHILE_1
	int i = 0;
	int n;
	cout << "Введите кол-во итераций: ";
	cin >> n;
	while (++i < n)
	{
		cout << i << "-Loops" << endl;
		//i++;
	}
#endif

#ifdef WHILE_2
	int n;
	cout << "Введите кол-во итераций: "; cin >> n;
	while (n)
	{
		cout << n-- << "\t";
	}
	cout << endl;
#endif

	char key;
	do
	{
		key = _getch(); // функция _getch() ожидает нажатие клавиши и возращает ASCII-код нажатой клавиши.
						// функция _getch() объявлена в библиотеке <conio.h>
		cout << (int)key << "\t" << key << endl;
	} while (true);
}
#endif //LOOPS
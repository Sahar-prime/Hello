#include <iostream>
using namespace std;
//#define HARD_CHESS

#ifdef HARD_CHESS
void main()
{
	setlocale(LC_ALL, "");

	int n;
	cout << "Введите размер доски: "; cin >> n;
	setlocale(LC_ALL, "C");
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i % 2 == j % 2)cout << (char)219 << (char)219;
			else cout << "  ";
		}
		cout << endl;
	}
}
#endif
/*
Примечаение: 
Я затрудняюсь сделать квадратики из "*", поэтому я решил использовать буквально готовые квадратики. Но по мне так даже красивее.
А так в целом общий алгоритм есть.
*/
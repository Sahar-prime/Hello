#include <iostream>
using namespace std;

//#define CHESSBOARD_2

//#define ASCII
//#define INTRO
//#define CHESS_BOARD

#define UPPER_LEFT_ANGLE (char)218
#define UPPER_RIGHT_ANGLE (char)191
#define LOWER_LEFT_ANGLE (char)192
#define LOWER_RIGHT_ANGLE (char)217
#define HORIZONTAL_LINE (char)196
#define VERTICAL_LINE (char)179
#define WHITE_BOX (char)219
#define BLACK_BOX (char)32

#ifdef CHESSBOARD_2
void main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите размер доски: "; cin >> n;

#ifdef INTRO
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			/*	if ((j+i) % 2 == 0)cout << "+ ";
				else cout << "- ";*/
				/*if (i % 2 == j % 2)cout << "+ "; else cout << "- ";*/
				/*(i % 2 == j % 2) ? cout << "+ ": cout << "- ";*/
				/*i % 2 == j % 2 ? cout << "+ ": cout << "- ";*/
			cout << (i % 2 == j % 2 ? "+ " : "- ");
		}
		cout << endl;
	}
#endif

#ifdef ASCII
	setlocale(LC_ALL, "C");//Выключаем русскую кодировку
	for (int i = 176; i < 224; i++)
	{
		cout << i << "\t" << (char)i << endl;;
	}
	cout << endl;
#endif

#ifdef CHESS_BOARD
	setlocale(LC_ALL, "C");
	n++;
	for (int i = 0; i <= n; i++)
	{
		for (int j = 0; j <= n; j++)
		{
			if (i == 0 && j == 0)cout << UPPER_LEFT_ANGLE;
			else if (i == 0 && j == n)cout << UPPER_RIGHT_ANGLE;
			else if (i == n && j == 0)cout << LOWER_LEFT_ANGLE;
			else if (i == n && j == n)cout << LOWER_RIGHT_ANGLE;
			else if (i == 0 || i == n)cout << HORIZONTAL_LINE << HORIZONTAL_LINE;
			else if (j == 0 || j == n)cout << VERTICAL_LINE;
			else
			{
				if (i % 2 == j % 2)cout << WHITE_BOX << WHITE_BOX;
				else cout << BLACK_BOX << BLACK_BOX;
			}

		}
		cout << endl;
	}
#endif
}
#endif
/*
Тернарный оператор(Conditional Ternary Operator) возращает одно из двух значений в зависимости от условия.
У тернарного оператора следующие синтаксис:
condition ? value_1 : value_2;
Если условие вернуло true, то тернарный оператор возращает значение "1", если false, то значение "2".
value_1 и value_2 обязательно должны быть одного типа, в противном случае поведение не определенно.
*/
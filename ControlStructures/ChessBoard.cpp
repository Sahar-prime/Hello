#include <iostream>
using namespace std;

//#define CHESS_BOARD

#define UPPER_LEFT_ANGLE (char)218
#define UPPER_RIGHT_ANGLE (char)191
#define LOWER_LEFT_ANGLE (char)192
#define LOWER_RIGHT_ANGLE (char)217
#define HORIZONTAL_LINE (char)196
#define VERTICAL_LINE (char)179
#define WHITE_BOX "\xDB\xDB" //(char)219
#define BLACK_BOX "\x20\x20" //(char)32

//Escape-послежовательность '\xXX' позволяет прямо в строке задать символ по ASCII-коду в шестнадцатеричной системе счисления.

#ifdef CHESS_BOARD
int main()
{
	setlocale(LC_ALL, "");
	int n;
	cout << "Введите размер доски: "; cin >> n;

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
				/*(i % 2 == j % 2) ? cout << WHITE_BOX << WHITE_BOX : cout << BLACK_BOX << BLACK_BOX;*/
				cout << (i % 2 == j % 2 ? WHITE_BOX : BLACK_BOX);
			}

		}
		cout << endl;
	}
}
#endif
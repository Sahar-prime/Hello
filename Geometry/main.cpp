#include <iostream>
using namespace std;

//#define GEOMETRY

//#define SQUARE
//#define TRIANGLE_1
//#define TRIANGLE_2
//#define TRIANGLE_3
//#define TRIANGLE_4
//#define RHOMBUS
//#define RHOMBUS_2

#ifdef GEOMETRY
void main()
{
	setlocale(LC_ALL, "");

	int n;
	cout << "Введите размер фигуры: "; cin >> n;

#ifdef SQUARE
	for (int i = 0; i < n; i++)
	{
		for (int i = 0; i < n; i++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif

#ifdef TRIANGLE_1
	for (int i = 1; i <= n; ++i)
	{
		for (int j = 0; j < i; ++j)
		{
			cout << "* ";
		}
		cout << endl;;
	}
#endif

#ifdef TRIANGLE_2
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif

#ifdef TRIANGLE_3
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < i; j++)
		{
			cout << "  ";
		}
		for (int j = i; j < n; j++)
		{
			cout << "* ";
		}
		cout << endl;
	}
#endif

#ifdef TRIANGLE_4

#endif

#ifdef RHOMBUS
	for (int i = 0; i < n; i++)
	{
		for (int j = i; j < n; j++) cout << " "; cout << "/";
		for (int j = 0; j < i; j++) cout << "  "; cout << "\\";
		cout << endl;
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j <= i; j++)cout << " "; cout << "\\";
		for (int j = i + 1; j < n; j++) cout << "  "; cout << "/";
		cout << endl;
	}
#endif

#ifdef RHOMBUS_2
	for (int i = 0; i < n * 2; i++)
	{
		for (int j = 0; j < n * 2; j++)
		{
			if (i == j + n || i + n == j)cout << "\\";
			else if (i + n == n * 2 - 1 - j || i - n == n * 2 - 1 - j)cout << "/";
			else cout << " ";
		}
		cout << endl;
	}
#endif
}
#endif //GEOMETRY
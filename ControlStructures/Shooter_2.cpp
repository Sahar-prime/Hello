#include <iostream>
#include <conio.h>
using namespace std;

//#define SHOOTER_1
//#define SHOOTER_2

#define Escape 27
#define Enter 13
#define Up_Arrow 72
#define Down_Arrow 80
#define Left_Arrow 75
#define Right_Arrow 77

#ifdef SHOOTER_1
void main() 
{
	setlocale(LC_ALL, "");
	cout << "Shooter" << endl;
	char key;
	do
	{
		key = _getch();

		if (key == 'w' || key == 'W' || key == Up_Arrow)
		{
			cout << "������" << endl;
		}
		else if (key == 's' || key == 'S' || key == Down_Arrow)
		{
			cout << "�����" << endl;
		}
		else if (key == 'a' || key == 'A' || key == Left_Arrow)
		{
			cout << "�����" << endl;
		}
		else if (key == 'd' || key == 'D' || key == Right_Arrow)
		{
			cout << "������" << endl;
		}
		else if (key == ' ')
		{
			cout << "������" << endl;
		}
		else if (key == Enter)
		{
			cout << "�����!" << endl;
		}

		else 
		{
			if (key != -32 && key != Escape) cout << "Error" << endl;
		}
		
	} while (key != Escape);
}
#endif

#ifdef SHOOTER_2
void main()
{
    setlocale(LC_ALL, "");
    cout << "Shooter" << endl;
    char key;
    do
    {
        key = _getch();

        switch (key)
        {
        case 'w':
        case 'W':
        case Up_Arrow:
            cout << "������" << endl;
            break;
        case 's':
        case 'S':
        case Down_Arrow:
            cout << "�����" << endl;
            break;
        case 'a':
        case 'A':
        case Left_Arrow:
            cout << "�����" << endl;
            break;
        case 'd':
        case 'D':
        case Right_Arrow:
            cout << "������" << endl;
            break;
        case ' ':
            cout << "������" << endl;
            break;
        case Enter:
            cout << "�����!" << endl;
            break;
        default:
            if (key != -32 && key != Escape) cout << "Error" << endl;
            break;
        }

    } while (key != Escape);
}
#endif

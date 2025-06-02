#include <iostream>
#include <conio.h>
#include <cctype> //��� ����������, ������� ��������� ������������ key = tolower(key);

using namespace std;

//#define SHOOTER

#ifdef SHOOTER
void main()
{
    const char forw = 'w';
    const char backw = 's';
    const char left = 'a';
    const char right = 'd';

    const char up = 72;
    const char down = 80;
    const char left_arrow = 75;
    const char right_arrow = 77;

    setlocale(LC_ALL, "Russian");
    char key;
    do
    {
        key = _getch();
        if (key == 0 || key == -32)
        {
            key = _getch(); // �������� ������ ������ ������������������
            if (key == up) 
            {
                cout << "��� ������" << endl;
            }
            else if (key == down)
            {
                cout << "��� �����" << endl;
            }
            else if (key == left_arrow)
            {
                cout << "������� �����" << endl;
            }
            else if (key == right_arrow) 
            {
                cout << "������� ������" << endl;
            }
        }
        else
        {
            key = tolower(key); //��� ������� ������ ������ ������� ����
            if (key == forw) 
            {
                cout << "��� ������" << endl;
            }
            else if (key == backw) 
            {
                cout << "��� �����" << endl;
            }
            else if (key == left) 
            {
                cout << "������� �����" << endl;
            }
            else if (key == right)
            {
                cout << "������� ������" << endl;
            }

            if (key == 13) 
            {
                cout << "�����!!!" << endl;
            }
        }
    } while (key != 27);
}
#endif
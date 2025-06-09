#include <iostream>
#include <conio.h>
#include <cctype> //это библиотека, которая позволяет использовать key = tolower(key);

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
            key = _getch(); // получаем второй символ последовательности
            if (key == up) 
            {
                cout << "Шаг вперед" << endl;
            }
            else if (key == down)
            {
                cout << "Шаг назад" << endl;
            }
            else if (key == left_arrow)
            {
                cout << "Поворот влево" << endl;
            }
            else if (key == right_arrow) 
            {
                cout << "Поворот вправо" << endl;
            }
        }
        else
        {
            key = tolower(key); //это команда делает нижний регистр букв
            if (key == forw) 
            {
                cout << "Шаг вперед" << endl;
            }
            else if (key == backw) 
            {
                cout << "Шаг назад" << endl;
            }
            else if (key == left) 
            {
                cout << "Поворот влево" << endl;
            }
            else if (key == right)
            {
                cout << "Поворот вправо" << endl;
            }

            if (key == 13) 
            {
                cout << "Огонь!!!" << endl;
            }
        }
    } while (key != 27);
}
#endif
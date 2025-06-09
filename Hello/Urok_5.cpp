/*
Синтаксис
Condition - это условие (логическое выражение)
Условие - это сравнение
Операторы сравнения всегда возращают true или false, т.е. значение типа bool
Блок else и code2 являются необязательными элементами конструкции if
Если условие вернуло true то условный код будет выполнен, в противном случае код будет пропущен
if - это управляющая структура, которая выполняет один из двух вариантов кода в зависимости от условия
Конструкции if и else можно объединят в цепочки в следующим образом:

#include<iostream>
using namespace std;
void main()
{
	if (cond1)
	{
		code1;
	}
	else if (cond2) 
	{
		code2;
	}
	......
	else if (condN) 
	{
		code_N;
	}
	else
	{
		default_code;
	}
}

Примечание:
1. Условие всегда пишется в ()!!!
2. После ключевого слова else никогда не пишется условие 
else (condition) - это НЕПРАВИЛЬНО!!!
Если после else нужно написать условие, то сначала пишут if, потом условие:
else if(condition) - это ПРАВИЛЬНО!!!
3. Ключевое слово else может быть написано только после if()

Цикл (Loop - Петля) - это управляющая структрура, которая позволяет многократно выполнить определенный код (зациклить)
В языке С++ есть 3 типа циклов:
1. while - это цикл с предусловием.
2. do...while - цикл с постусловием.
3. for - цикл на заданное число итераций.\
Итерация - однократное выполнение тела цикла.
Тело цикла - это код, который нужно зациклить (многократно выполнить)


*/



/*
#include<iostream>
using namespace std;
void main() 
{
	if (condition) 
	{
		...;
		code1;
		...;
	}
	else 
	{
		...;
		codel2;
		...;
	}
}
*/


#include<iostream>
using namespace std;

//#define UROK_5

#ifdef UROK_5
void main() 
{
	setlocale(LC_ALL, "");
	cout << "ControlStructures" << endl;
	int temperatur;
	cout << "Введите температуру воздуха: "; cin >> temperatur;
	cout << temperatur << endl;
	if (temperatur >= 50) 
	{
		cout << "Вы на экваторе" << endl;
	}
	else if (temperatur >= 70)
	{
		cout << "Вы на другой планете" << endl;
	}
	else if (temperatur >= 30) 
	{
		cout << "Жарко" << endl;
	}
	else if (temperatur >= 10) 
	{
		cout << "Тепло" << endl;
	}
	else if (temperatur >= 0) 
	{
		cout << "Прохладно" << endl;
	}
	else if (temperatur >= -10)
	{
		cout << "Мороз" << endl;
	}
	else if (temperatur >= -43 )
	{
		cout << "Вы на северном полюсе" << endl;
	}
	else if (temperatur >= -70) 
	{
		cout << "Вы на другой планете" << endl;
	}
}
#endif //UROK_5
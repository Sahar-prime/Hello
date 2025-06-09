#include<iostream>
using namespace std;

//#define CALC

//#define CALC_IF
//#define CALC_SWITCH

#ifdef CALC
void main() 
{
	setlocale(LC_ALL, "");
	int num_1;
	int num_2;
	char operation;
	int result;
	cout << "Введите первое число:" << endl;
	cin >> num_1;
	cout << "Введите второе число:" << endl;
	cin >> num_2;
	cout << "Введите арифметическую операцию:" << endl;
	cin >> operation;
#if defined CALC_IF
	if (operation == '+')
	{
		result = num_1 + num_2;
		cout << "Ответ: " << result;
	}
	else if (operation == '-')
	{
		result = num_1 - num_2;
		cout << "Ответ: " << result;
	}
	else if (operation == '*')
	{
		result = num_1 * num_2;
		cout << "Ответ: " << result;
	}
	else if (operation == ':')
	{
		result = num_1 / num_2;
		cout << "Ответ: " << result;
	}
	else 
	{
		cout << "Введите элементарные арифметические операции: \'*, :, +, -.\'" << endl;
	}
#endif

#if defined CALC_SWITCH
	switch (operation) 
	{
	case '+': cout << num_1 << "+" << num_2 << " = " << num_1 + num_2 << endl; break;
	case '-': cout << num_1 << "-" << num_2 << " = " << num_1 - num_2 << endl; break;
	case '*': cout << num_1 << "*" << num_2 << " = " << num_1 * num_2 << endl; break;
	case ':': cout << num_1 << ":" << num_2 << " = " << num_1 / num_2 << endl; break;
	default: cout << "Error: No operation" << endl;
	//case - случай
	//value - значение
	//label - метка
	
	}


#endif
}
#endif //CALC
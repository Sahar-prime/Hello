#include<iostream>
using namespace std;
//#define CALC_IF
#define CALC_SWITCH
void n() 
{
	setlocale(LC_ALL, "");
	int num_1;
	int num_2;
	char operation;
	int result;
	cout << "������� ������ �����:" << endl;
	cin >> num_1;
	cout << "������� ������ �����:" << endl;
	cin >> num_2;
	cout << "������� �������������� ��������:" << endl;
	cin >> operation;
#if defined CALC_IF
	if (operation == '+')
	{
		result = num_1 + num_2;
		cout << "�����: " << result;
	}
	else if (operation == '-')
	{
		result = num_1 - num_2;
		cout << "�����: " << result;
	}
	else if (operation == '*')
	{
		result = num_1 * num_2;
		cout << "�����: " << result;
	}
	else if (operation == ':')
	{
		result = num_1 / num_2;
		cout << "�����: " << result;
	}
	else 
	{
		cout << "������� ������������ �������������� ��������: \'*, :, +, -.\'" << endl;
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
	//case - ������
	//value - ��������
	//label - �����
	
	}


#endif
}
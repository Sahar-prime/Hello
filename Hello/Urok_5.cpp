/*
���������
Condition - ��� ������� (���������� ���������)
������� - ��� ���������
��������� ��������� ������ ��������� true ��� false, �.�. �������� ���� bool
���� else � code2 �������� ��������������� ���������� ����������� if
���� ������� ������� true �� �������� ��� ����� ��������, � ��������� ������ ��� ����� ��������
if - ��� ����������� ���������, ������� ��������� ���� �� ���� ��������� ���� � ����������� �� �������
����������� if � else ����� ��������� � ������� � ��������� �������:

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

����������:
1. ������� ������ ������� � ()!!!
2. ����� ��������� ����� else ������� �� ������� ������� 
else (condition) - ��� �����������!!!
���� ����� else ����� �������� �������, �� ������� ����� if, ����� �������:
else if(condition) - ��� ���������!!!
3. �������� ����� else ����� ���� �������� ������ ����� if()

���� (Loop - �����) - ��� ����������� ����������, ������� ��������� ����������� ��������� ������������ ��� (���������)
� ����� �++ ���� 3 ���� ������:
1. while - ��� ���� � ������������.
2. do...while - ���� � ������������.
3. for - ���� �� �������� ����� ��������.\
�������� - ����������� ���������� ���� �����.
���� ����� - ��� ���, ������� ����� ��������� (����������� ���������)


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
	cout << "������� ����������� �������: "; cin >> temperatur;
	cout << temperatur << endl;
	if (temperatur >= 50) 
	{
		cout << "�� �� ��������" << endl;
	}
	else if (temperatur >= 70)
	{
		cout << "�� �� ������ �������" << endl;
	}
	else if (temperatur >= 30) 
	{
		cout << "�����" << endl;
	}
	else if (temperatur >= 10) 
	{
		cout << "�����" << endl;
	}
	else if (temperatur >= 0) 
	{
		cout << "���������" << endl;
	}
	else if (temperatur >= -10)
	{
		cout << "�����" << endl;
	}
	else if (temperatur >= -43 )
	{
		cout << "�� �� �������� ������" << endl;
	}
	else if (temperatur >= -70) 
	{
		cout << "�� �� ������ �������" << endl;
	}
}
#endif //UROK_5
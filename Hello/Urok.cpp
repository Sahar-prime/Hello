#include<iostream>
using namespace std;

//#define Elochka

#define first_str "\t\t\t\t\t\t\t"
#define strok "\n\t\t\t\t\t\t"
#define hi "+++++"

#ifdef Elochka
void main()
{
	setlocale(LC_ALL, "Russian");
	cout << first_str hi;
	cout << strok << "� ���� �������� ������,\n\t\t\t\t\t\t� ���� ��� �����,\n\t\t\t\t\t\t����� � ����� ��������,\n\t\t\t\t\t\t������� ����.\n";
	cout << strok << "������ �� ���� �������:\n\t\t\t\t\t\t\"���, ������, ��� - ���!\"\n\t\t\t\t\t\t����� ������� ��������:\n\t\t\t\t\t\t\"������, �� ��������!\"\n";
	cout << strok << "�������� ����� ���������\n\t\t\t\t\t\t��� ������� ������.\n\t\t\t\t\t\t����� ����, �������� ����\n\t\t\t\t\t\t������ ��������.\n";
	cout << strok << "��! ���� �� ���� �������\n\t\t\t\t\t\t��� ������� �������,\n\t\t\t\t\t\t������� ����������\n\t\t\t\t\t\t���������, �����.\n";
	cout << strok << "����� ������� ��������,\n\t\t\t\t\t\t� � ������� ��������,\n\t\t\t\t\t\t������ �� ���� ������\n\t\t\t\t\t\t��� ����� �������.\n";
	cout << strok << "������ ���, ��������,\n\t\t\t\t\t\tH� �������� � ��� ������\n\t\t\t\t\t\t� �����, ����� �������\n\t\t\t\t\t\t�������� ��������!\n";
}
#endif //Elochka


//Ctrl+F7 - ����������
//Ctrl+F5 - ������

/*
------------------------------------------------
#include<iostream>
# - ���������� ��� #include - ��� ���������
��������� - ��� ��������� ����������� �� ���������� ��������� ��������
��������� #inslude (��������, ����������) �������� ����������� �� ��, ��� � ������ ��������� ����� ����� ���������� ������ ����, � ������ ������ <iostream>
��� ���������� �� ����� ��������� #include ���������� ����������� ����������� ������� ����� � ��� ����.
���������� <iostream> �������� ������ �����/������ cin/cout ��� ����� � ���������� � ������ �� �����.
��� ������� ����� ����� ���� ������� � <> ��� ""
<> - ���������� ����� ������ ���� � ��������� ��������� Visual Studio
"" - ���������� ����� ������ ���� ������� � �������� � ��������, � ����� � ��������� ��������� Visual Studio
------------------------------------------------
using namespace std;
������� ����������� ������������ ������������ ���� 'std'
� ���� ������� ������������ ��������� ������ cin/cout
������������ ���� ����� ��� ���������� ������������� ����.
������� ������������ ����� ������ ���������� � ���������� (�������).
------------------------------------------------
viod main()
main() - ��� ������� �������, ������� �������� ������ �����, ��������� � ��� ���������� ���������� ����� ���������.
������� main() ����������� ������ ���� � ����� �������, �� ������ 1, � ��������� ������ ��������� ������ �� ����� ����������.
() - ������������, ��� main() - ��� �������
{} - ���������� ���� � ������� ��������� ������� main()
void(�������) - ����������, ��� ������ main() ������ �� ��������� �� ����������.
------------------------------------------------
cout (Console Out) - ����� ������ �� �����. ������� �������� � ���� �������.
cout ����� �������� ������� ������ ��������, ��� ���� ��� ����������� <<.
<< - �������� ��������������� � �����, ���������� �������� � ����� 'cout'.
"Hello World" - ��� ��������� ���������.
��������� ��������� - ��� ������������������ ��������, ����������� � "".
; - ������� ����� ���������, ��� �� ��� . �������� ��������� ����� ����������� � ���������� ����.
------------------------------------------------
��������� #define.
define - ���������� (definition - �����������)
��������� define ������� ���������������� (������), ������� ���������� �����������, ��� ����� �������� � ��� ��������.
� ����� ������ str �������� �����������:
	#define strok "\n\t\t\t\t\t\t"
strok - ��� ��� �������, � ���������� - �������� �������.
#define, ��� � ����� ���������, ������������ �� ����� ����������.
��� ������ ��������� #define � C++ ����������� ���������.
��� �������� ������ ������ �������, �� �� � ���� �������� ���� ��������. ��������:
	#define Elochka
����� ������� ������������ ������ ����������� �������� ����������
------------------------------------------------
Escape - ������������������ (Esc).
Esc ����� ��� ������������ ��������� � ������� ����������, � ��� ������ ��������� ����������� ��������.
Esc - ��� ��������� �������, �������������� �������� \
/ - (Slash) - ����� �����;
\ (BakcSlash) - ������ ������ ������������ �������� ������� �������, �� �������� ����������� �������� �������, ���������� �� ���.
��������:
\" - �������� ����������� �������� �������, ������������� ������� ��������������� ��� ������� ������, � ��������� � �������.
��������� �������� \ �������� ������� ����������� ��������. ��������:
\n - newline, ������� ������� � ������ ����� ������
\t - tab, ����� � ������� ������� ���������. ������ ��������� �������� � ���� �� 8-�� ��������.
*/
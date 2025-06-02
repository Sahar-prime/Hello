#include <iostream>

//#define TICKET

bool isLuckyTicket(int ticketNumber) {
    // ��������� ����� ������
    int digit1 = ticketNumber / 100000;
    int digit2 = (ticketNumber / 10000) % 10;
    int digit3 = (ticketNumber / 1000) % 10;
    int digit4 = (ticketNumber / 100) % 10;
    int digit5 = (ticketNumber / 10) % 10;
    int digit6 = ticketNumber % 10;

    // ��������� ����� ������ ��� � ��������� ��� ����
    int sumFirstHalf = digit1 + digit2 + digit3;
    int sumSecondHalf = digit4 + digit5 + digit6;

    // ���������� �����
    return sumFirstHalf == sumSecondHalf;
}

#ifdef TICKET
int main()
{
    setlocale(LC_ALL, "Russian");
    int ticketNumber;

    std::cout << "������� ����� ����������� ������ (������������ �����): ";
    std::cin >> ticketNumber;

    if (isLuckyTicket(ticketNumber)) {
        std::cout << "����� " << ticketNumber << " �������� ����������!" << std::endl;
    }
    else {
        std::cout << "����� " << ticketNumber << " �������� �������." << std::endl;
    }

    return 0;
}
#endif
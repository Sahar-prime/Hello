#include <iostream>

//#define TICKET

bool isLuckyTicket(int ticketNumber) 
{
    // Извлекаем цифры билета
    int digit1 = ticketNumber / 100000;
    int digit2 = (ticketNumber / 10000) % 10;
    int digit3 = (ticketNumber / 1000) % 10;
    int digit4 = (ticketNumber / 100) % 10;
    int digit5 = (ticketNumber / 10) % 10;
    int digit6 = ticketNumber % 10;

    // Вычисляем сумму первых трёх и последних трёх цифр
    int sumFirstHalf = digit1 + digit2 + digit3;
    int sumSecondHalf = digit4 + digit5 + digit6;

    // Сравниваем суммы
    return sumFirstHalf == sumSecondHalf;
}

#ifdef TICKET
int main()
{
    setlocale(LC_ALL, "Russian");
    int ticketNumber;

    std::cout << "Введите номер автобусного билета (шестизначное число): ";
    std::cin >> ticketNumber;

    if (isLuckyTicket(ticketNumber)) {
        std::cout << "Билет " << ticketNumber << " является счастливым!" << std::endl;
    }
    else
    {
        std::cout << "Билет " << ticketNumber << " является обычным." << std::endl;
    }
}
#endif
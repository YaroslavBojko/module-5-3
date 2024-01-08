#include <iostream>
/*Задание 3. Майские — усложнение
Что нужно сделать
В предыдущем задании вы написали программу-календарь для мая. Теперь добавьте возможность начать месяц с любого дня недели.

Для этого нужно ввести число — номер дня недели, с которого начинается месяц. Убедитесь, что введённое число корректно.

Советы и рекомендации
Для начала выполните задание 2.
Постарайтесь не проверять каждый вариант месяца отдельно. Некоторые условия можно объединить.

 3. Убедитесь, что введённое число корректно.
 4. переделать условия
 5. Постарайтесь не проверять каждый вариант месяца отдельно. Некоторые условия можно объединить.
 */


int main() {
    int day;
    std::cout << "Enter the day number: ";
    std::cin >> day;

    int dayWeekNumber;
    std::cout << "Enter a number - the number of the day of the week from which the month begins: ";
    std::cin >> dayWeekNumber;
    if (dayWeekNumber < 1 || dayWeekNumber > 7)
    {
        std::cout << "Incorrect number visible - day of week number!!!" << std::endl;
    } else
    {
        if ((day + dayWeekNumber - 1) % 7 == 0 || (day + dayWeekNumber) % 7 == 6 || (day >= 1 && day <=5) || (day >= 8 && day <= 10))
            std::cout << "Day off!!!" << std::endl;
        else
            std::cout << "Working day!!!" << std::endl;
    }


}

#include <iostream>

//#define DAY_TO_STR(day) ((day) == 1 ? "MONDAY" : (day) == 2 ? "TUESDAY" : (day) == 3 ? "WEDNESDAY" : (day) == 4 ? "THURSDAY" : (day) == 5 ? "FRIDAY" : (day) == 6 ? "SATURDAY" : (day) == 7 ? "SUNDAY" : "ERR")

#define CONCATENATION(day) DAY_##day

#define DAY_1 "MONDAY"
#define DAY_2 "TUESDAY"
#define DAY_3 "WEDNESDAY"
#define DAY_4 "THURSDAY"
#define DAY_5 "FRIDAY"
#define DAY_6 "SATURDAY"
#define DAY_7 "SUNDAY"

#define DAY_TO_STR(day) \
if (day == 1) (std::cout << CONCATENATION(1)); \
else if (day == 2) (std::cout << CONCATENATION(2)); \
else if (day == 3) (std::cout << CONCATENATION(3)); \
else if (day == 4) (std::cout << CONCATENATION(4)); \
else if (day == 5) (std::cout << CONCATENATION(5)); \
else if (day == 6) (std::cout << CONCATENATION(6)); \
else if (day == 7) (std::cout << CONCATENATION(7)); 

int main() {
    int answer;
    std::cout << "Input day: ";
    std::cin >> answer;

    DAY_TO_STR(answer);
}

/*
Используя макросы, реализуйте небольшую программу по вводу 
дня недели и выводу этого дня недели в текстовом виде в консоль.
В начале программы пользователь вводит день недели в виде его 
порядкового номера. В результате в консоли появляется буквенное отображение этого дня недели.
В этом упражнении запрещается использовать классические переменные, 
кроме как для хранения ввода пользователя. Использовать строковые 
литералы напрямую тоже нельзя. Всё должно быть реализовано исключительно на макросах.
*/
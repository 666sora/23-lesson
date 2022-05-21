#include <iostream>

#define AUTUMN


#if defined AUTUMN
int main() {
    std::cout << "AUTUMN";    
}
#endif

#if defined SPRING
int main() {
    std::cout << "SPRING";    
}
#endif

#if defined WINTER
int main() {
    std::cout << "WINTER";    
}
#endif

#if defined SUMMER
int main() {
    std::cout << "SUMMER";    
}
#endif

/*
Используя макросы вместе с условными директивами прекомпиляции (#if / #endif), 
реализуйте простую программу по выводу названия времени года в консоль.
Пользователь программы в данном случае сам программист. С помощью определения 
одного из макросов: SPRING, SUMMER, AUTUMN или WINTER, он задаёт сезон, 
название которого хочет увидеть на экране. При компиляции и запуске 
программы на экране должно появиться название именно этого сезона и только его.
*/
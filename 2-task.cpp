#include <iostream>

#define ARRAY_FOR(func) for (int i = 0; i < 10; i++) func(i, train);

int sum_of_people = 0;

void fill_train(int trainI, int (&train)[10]) {
    int trainCar;
    std::cout << "Input count of people in " << trainI + 1 << " train car: ";
    std::cin >> trainCar;
    train[trainI] = trainCar;
}

void find_sum(int trainI, int (&train)[10]) {
    sum_of_people += train[trainI];
}

void check_train(int trainI, int(&train)[10]) {
    if (train[trainI] > 20) {
        std::cout << trainI + 1 << " train car is overload" << std::endl;
    }
    else if (train[trainI] < 20) {
        std::cout << trainI + 1 << " train car have empty seats" << std::endl;
    }
}

int main() {
    int train[10];
    ARRAY_FOR(fill_train);
    ARRAY_FOR(find_sum);
    ARRAY_FOR(check_train);
    std::cout << sum_of_people; 
}

/*
В поезде всего 10 вагонов. В каждом из этих вагонов может находиться до 
20-ти пассажиров — это оптимальное их количество. Проанализируйте 
количество людей в каждом из вагонов и сначала сообщите об излишне 
заполненных вагонах, далее о вагонах с пустыми пассажирскими местами. 
В заключении выведите общее количество пассажиров во всех вагонах.
При старте программы пользователь вводит количество пассажиров 
в каждом из вагонов. Замечания о вагонах должны выводиться в стандартную консоль.
При выполнении задания пользоваться for-циклами напрямую не 
разрешается, только опосредованно, через макросы.
*/
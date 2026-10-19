#include "menu_functions.hpp"


#include <iostream>
#include <limits>

const AMasan::MenuItem *AMasan::read_two_numbers(const MenuItem *current) {
    std::cout << "Главное меню: " << std::endl;
    std::cout << "Введите два числа: ";
    int a; int b;
    std::cin >> a >> b;
    std::cout << a + b << std::endl;
    return current->parent;
}


const AMasan::MenuItem *AMasan::show_menu(const MenuItem *current) {
    std::cout << "Главное меню: " << std::endl;
    for (int i = 1; i < current->children_count; ++i) {
        std::cout << current->children[i]->title << std::endl;
    }
    std::cout << current->children[0]->title << std::endl;
    std::cout << "Ввод > ";
    int user_input = 0;
    if (!(std::cin >> user_input)) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << "Ошибка: нужно ввести число." << std::endl;
        return current;
    }

    if (user_input < 0 || user_input >= current->children_count) {
        std::cout << "Нет такого пункта." << std::endl;
        return current;
    }

    return current->children[user_input];
}

const AMasan::MenuItem* AMasan::exit(const MenuItem*) {
    std::exit(0);
    return nullptr;
}

const AMasan::MenuItem* AMasan::go_back(const MenuItem* current) {
    if (current->parent != nullptr && current->parent->parent != nullptr) {
        return current->parent->parent;
    }
    if (current->parent != nullptr) {
        return current->parent;
    }
    return current;
}
const AMasan::MenuItem* AMasan::other_technologi_database(const MenuItem* current) {
    std::cout << "Вы изучаете базы данных" << std::endl;
    return current->parent;
}
const AMasan::MenuItem* AMasan::other_technologi_program(const MenuItem* current) {
    std::cout << "Вы изучаете многопоточное программирование" << std::endl;
    return current->parent;
}
const AMasan::MenuItem* AMasan::other_technologi_internet(const MenuItem* current) {
    std::cout << "Вы изучаете сетевые технологии" << std::endl;
    return current->parent;
}

#pragma once

#include "menu.hpp"

namespace AMasan {

    const MenuItem* show_menu(const MenuItem* current);
    const MenuItem* exit(const MenuItem* current);
    const MenuItem* go_back(const MenuItem* current);

    const MenuItem* other_technologi_database(const MenuItem* current);
    const MenuItem* other_technologi_program(const MenuItem* current);
    const MenuItem* other_technologi_internet(const MenuItem* current);

    const MenuItem* read_two_numbers(const MenuItem *current);
}
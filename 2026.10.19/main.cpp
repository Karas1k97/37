#include "menu.hpp"
#include "menu_items.hpp"

int main() {
    const AMasan::MenuItem* current = &AMasan::MAIN;
    do {
        current = current->func(current);
    } while (true);
    return 0;
}
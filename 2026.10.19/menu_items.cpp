#include "menu_items.hpp"

#include <cstddef>

#include "menu_functions.hpp"

const AMasan::MenuItem AMasan::OTHER_TECHNOLOGI_DATABASE = {
    "1 - Хочу изучить базы данных!", AMasan::other_technologi_database,&AMasan::OTHER_TECHNOLOGI
};
const AMasan::MenuItem AMasan::OTHER_TECHNOLOGI_PROGRAM = {
    "2 - Хочу изучить многопоточное программирование!", AMasan::read_two_numbers,&AMasan::OTHER_TECHNOLOGI
};
const AMasan::MenuItem AMasan::OTHER_TECHNOLOGI_INTERNET = {
    "3 - Хочу изучить сетевые технологии!", AMasan::other_technologi_internet,&AMasan::OTHER_TECHNOLOGI
};

const AMasan:: MenuItem AMasan::STUDY_GO_BACK = {
    "0 - Выйти в главное меню", AMasan::go_back, &AMasan::STUDY
};
const AMasan:: MenuItem AMasan::PROG_GO_BACK = {
    "0 - Выйти в предыдущее меню", AMasan::go_back, &AMasan::PROG
};
const AMasan:: MenuItem AMasan::ALGORITHM_GO_BACK = {
    "0 - Выйти в предыдущее меню", AMasan::go_back, &AMasan::ALGORITHM
};
const AMasan:: MenuItem AMasan::OTHER_TECHNOLOGI_GO_BACK = {
    "0 - Выйти в предыдущее меню", AMasan::go_back, &AMasan::OTHER_TECHNOLOGI
};

namespace {
    const AMasan::MenuItem* const prog_children[] = {
        &AMasan::PROG_GO_BACK,
    };
    const int prog_size=sizeof(prog_children) / sizeof(prog_children[0]);

    const AMasan::MenuItem* const algorithm_children[] = {
        &AMasan::ALGORITHM_GO_BACK,
    };
    const int algorithm_size=sizeof(algorithm_children) / sizeof(algorithm_children[0]);

    const AMasan::MenuItem* const other_technologi_children[] = {
        &AMasan::OTHER_TECHNOLOGI_GO_BACK,
        &AMasan::OTHER_TECHNOLOGI_DATABASE,
        &AMasan::OTHER_TECHNOLOGI_PROGRAM,
        &AMasan::OTHER_TECHNOLOGI_INTERNET,
    };
    const int other_technologi_size = sizeof(other_technologi_children) / sizeof(other_technologi_children[0]);

    const AMasan::MenuItem* const study_children[] = {
        &AMasan::STUDY_GO_BACK,
        &AMasan::PROG,
        &AMasan::ALGORITHM,
        &AMasan::OTHER_TECHNOLOGI,
    };
    const int study_size=sizeof(study_children) / sizeof(study_children[0]);

    const AMasan::MenuItem* const main_children[] = {
        &AMasan::EXIT,
        &AMasan::STUDY,
    };
    const int main_size=sizeof(main_children) / sizeof(main_children[0]);
};

const AMasan::MenuItem AMasan::PROG = {
    "1 - Хочу изучать программирование",
    AMasan::show_menu,
    &AMasan::STUDY,
    prog_children,
    prog_size,
};

const AMasan::MenuItem AMasan::ALGORITHM = {
    "2 - Хочу изучать алгоритмы и структуры",
    AMasan::show_menu,
    &AMasan::STUDY,
    algorithm_children,
    algorithm_size,
};

const AMasan::MenuItem AMasan::OTHER_TECHNOLOGI = {
    "3 - Хочу изучать другие технологии",
    AMasan::show_menu,
    &AMasan::STUDY,
    other_technologi_children,
    other_technologi_size,
};

const AMasan::MenuItem AMasan::STUDY = {
    "1 - Хочу изучать програмированние",
    AMasan::show_menu,
    &AMasan::MAIN,
    study_children,
    study_size,
};

const AMasan::MenuItem AMasan::EXIT = {
    "0 - Пойду играть в футбол",
    AMasan::exit,
    &AMasan::MAIN
};

const AMasan::MenuItem AMasan::MAIN = {
    nullptr, AMasan::show_menu, nullptr, main_children, main_size
};
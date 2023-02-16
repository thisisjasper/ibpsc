#include "interpretor.hpp"
#include <iostream>

int main(int argc, char **argv) {
    if (argc > 2) {
        std::cout << "Usage: ibpsc [script]" << std::endl;
        exit(0);
    } else if (argc == 2) {

    } else {
        // implement REPL later
        std::cout << "Usage: ibpsc [script]" << std::endl;
        exit(0);
    }
    return 0;
}
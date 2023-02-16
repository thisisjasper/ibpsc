#include "interpretor.hpp"
#include "tokenize.hpp"
#include <iostream>

void Interpretor::run(std::string src_code) {
    auto tokens = tokenize(src_code, "\\s+");

}
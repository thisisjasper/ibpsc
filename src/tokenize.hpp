#ifndef IBPSC_TOKENIZE_HPP
#define IBPSC_TOKENIZE_HPP

#include <string>
#include <regex>
#include <vector>

std::vector<std::string> tokenize(std::string inp, std::string regex_delim) {
    using namespace std;
    regex reg(regex_delim);
    return vector<string>(
        sregex_token_iterator(inp.begin(), inp.end(), reg, -1),
        sregex_token_iterator{}
    );
    
}

#endif
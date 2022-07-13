#ifndef _IS_NUMBER_HPP_
#define _IS_NUMBER_HPP_

#include <string>

bool is_number(const std::string & str)
{
    for (char const& c : str) {
        if (std::isdigit(c) == 0) return false;
    }
    return true;
}
#endif

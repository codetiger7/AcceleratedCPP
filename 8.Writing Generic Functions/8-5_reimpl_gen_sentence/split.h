#ifndef SPLIT_H
#define SPLIT_H

#include <algorithm>
#include <cctype>
#include <string>
#include <vector>



inline bool not_space(char c)
{
    return !std::isspace(c);
}

inline bool space(char c)
{
    return std::isspace(c);
}


std::vector<std::string> split( const std::string& str);


#endif // SPLIT_H

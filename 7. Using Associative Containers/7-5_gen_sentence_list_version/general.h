#ifndef GENERAL_H
#define GENERAL_H


#include <vector>
#include <string>

std::vector<std::string> split(const std::string& str);


bool space(char c);
bool not_space(char c);
bool bracketed(const std::string& s);

#endif // GENERAL_H

#ifndef FRAMING_H
#define FRAMING_H

#include <string>
#include <vector>

std::vector<std::string> frame(const std::vector<std::string>& v);

std::vector<std::string> center(const std::vector<std::string>& v);

std::string::size_type width(const std::vector<std::string>& v);

#endif // FRAMING_H

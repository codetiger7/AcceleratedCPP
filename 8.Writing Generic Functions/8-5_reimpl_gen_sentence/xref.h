#ifndef XREF_H
#define XREF_H

#include <map>
#include <iterator>
#include <string>
#include <vector>

#include <split.h>


// find all the lines that refer to each word in the input
std::map<std::string, std::vector<int> >
xref(std::istream& in,
     std::vector<std::string> find_words(const std::string&) = split);



#endif // XREF_H

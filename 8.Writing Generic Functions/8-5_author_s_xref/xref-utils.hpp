#pragma once

#include <map>
#include <string>
#include <vector>


// find all the lines that refer to each word in the input
template <class OutputIterator>
OutputIterator xref(std::istream& in,
                    void find_words(const std::string&,
                                    std::back_insert_iterator<std::vector))

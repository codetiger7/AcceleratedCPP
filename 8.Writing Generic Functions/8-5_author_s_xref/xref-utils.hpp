#pragma once

#include <map>
#include <string>
#include <vector>


// find all the lines that refer to each word in the input
template <class OutputIterator> /// @note output iterator
OutputIterator xref(std::istream& in,
                    void find_words(const std::string&, std::back_insert_iterator<std::vector<std::string> >),
                    OutputIterator d) /// @note output iterator
{

    std::string line;
    int line_number = 0;
    std::map<std::string, std::vector<int> > ret;


    // read the next line
    while( getline(in, line))
    {
        ++line_number;

        // break the input line into words
        std::vector<std::string> words;
        find_words(line, std::back_inserter(words));

        // remember that each word occurs on the current line
        for( std::vector<std::string>::const_iterator it = words.begin();
             it != words.end(); ++it)
        {
            ret[*it].push_back(line_number);
        }
    }

    // write results to output iterator
    copy(ret.begin(), ret.end(), d);    /// @note output iterator

    return d; /// @note output iterator
}

#ifndef GEN_SENTENCE_H
#define GEN_SENTENCE_H

#include <map>
#include <string>
#include <vector>



std::vector<std::string>
gen_sentence(const std::map<std::string, std::vector<std::vector<std::string> > >& g);

void
gen_aux(const std::map<std::string, std::vector<std::vector<std::string> > >& g,
        const std::string& word,
        std::vector<std::string>& ret);

bool bracketed( const std::string& s);



#endif // GEN_SENTENCE_H

#ifndef GENERATE_H
#define GENERATE_H

#include <string>
#include <vector>
#include <map>
#include <istream>

typedef std::vector<std::string> Rule;
typedef std::vector<Rule> Rule_collection;
typedef std::map<std::string, Rule_collection> Grammar;


// functions
std::vector<std::string> gen_sentence(const Grammar& g);

void gen_aux(const Grammar& g, const std::string& word, std::vector<std::string>& ret);

Grammar read_grammar(std::istream& in );

int nrand(int n);




#endif // GENERATE_H

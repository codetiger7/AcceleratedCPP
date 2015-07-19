#ifndef HELPER_H
#define HELPER_H

#include <iostream>
#include <map>
#include <split.h>
#include <string>
#include <vector>




typedef std::vector<std::string> Rule;
typedef std::vector<Rule> Rule_collection;
typedef std::map<std::string, Rule_collection> Grammar;

// read a grammer from a given input stream
Grammar read_grammar(std::istream& in);

std::vector<std::string> gen_sentence(const Grammar& g);

void gen_aux(const Grammar&g,
             const std::string& token,
             std::vector<std::string>& sentence,
             std::vector<std::string>& tokens);

int nrand(int);

bool bracketed(const std::string& s);


#endif // HELPER_H

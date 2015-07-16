
#ifndef FUNCTIONS
#define FUNCTIONS

#include <vector>
#include <string>


std::vector<std::string> find_urls(const std::string& s);




// beginning of url
std::string::const_iterator url_beg(std::string::const_iterator b, std::string::const_iterator e);

// end of url
std::string::const_iterator url_end(std::string::const_iterator b, std::string::const_iterator e);
bool not_url_char( char c);


#endif // FUNCTIONS


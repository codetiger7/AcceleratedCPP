#ifndef PLINE_H
#define PLINE_H

#include <vector>
#include <string>


class PLine
{
public:
    PLine(std::vector<std::string> data, int rotations);
    ~PLine();


    void init();
    void setPermText();
    void rotate(int rot);


    std::vector<std::string> display(int separation );

    std::vector<std::string> txt_;
    std::vector<std::string> permtxt_;
    std::string stringLine;
    int rotations_;


};


bool compare(const PLine&, const PLine&);



#endif // PLINE_H

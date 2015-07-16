
#include <core.h>

class Grad : public Core
{
public:
    Grad();
    Grad(std::istream&);
    double grade() const;
    std::istream& read(std::istream&);

private:
    double thesis;

};

bool compare(const Core&, const Core& );

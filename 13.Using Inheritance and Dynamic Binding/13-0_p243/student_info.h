#ifndef STUDENT_INFO
#define STUDENT_INFO

#include <iostream>
#include <string>

class Student_info
{
public:
    // constructors and copy control
    Student_info() : cp(0) { }
    Student_info(std::istream& is) : cp(0) { read(std::istream& is); }
    Student_info(const Student_info&);
    Student_info& operator=(const Student_info&);
    ~Student_info() { delete cp; }

    // operations
    std::istream& read(std::istream&);

    std::string name() const
    {
        if (cp)
            return cp->name();
        else
            throw std::runtime_error("unitialized Student");
    }

    double grade() const
    {
        if (cp)
            return cp->grade();
        else
            throw std::runtime_error("unitialized Student");
    }

    static bool compare(const Student_info& s1,
                        const Student_info& s2)
    {
        return s1.name() < s2.name();
    }

private:
    Core* cp;
};

#endif // STUDENT_INFO


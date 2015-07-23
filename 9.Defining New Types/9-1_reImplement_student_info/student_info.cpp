#include <student_info.h>

#include <istream>


using std::istream;


istream&
Student_info::read(istream& is)
{
    is >> name_ >> midterm_ >> final_;

}

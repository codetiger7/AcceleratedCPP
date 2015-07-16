/// 4-1
/// will the code work as is?
/// Negative it will not

/// how to fix it?
/// instead of using maxlen as an int
/// define it as a string::size_type

#include <../4-0_c_revised_grading_program/student_info.h>
#include <iostream>
#include <string>

using namespace std;

int main()
{

//    int maxlen;
    string::size_type maxlen;
    Student_info s;

    max(s.name.size(), maxlen);

    return 0;
}


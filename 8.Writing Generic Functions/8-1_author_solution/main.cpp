
#include <iostream>
#include <vector>

#include <student_info.h>
#include <analysis.hpp>

using namespace std;


int main()
{
    // students who did and didn't do all their homework
    vector<Student_info> did;
    vector<Student_info> didnt;

    // read the student records, and partition them
    Student_info student;
    while (read(cin, student))
    {
        if (did_all_hw(student))
            did.push_back(student);
        else
            didnt.push_back(student);
    }

    return 0;
}


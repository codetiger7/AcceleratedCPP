
#include <functions.h>
#include <vector>

using namespace std;

/// predicate to determine whether a student failes
bool fgrade(const Student_info& s)
{
    return grade(s) < 60;
}


/// separate passing and failing student records, first try
vector<Student_info> extract_fails(vector<Student_info>& students)
{
    vector<Student_info> pass;
    vector<Student_info> fail;

    typedef vector<Student_info>::size_type v_sz;
    for(v_sz i = 0; i != students.size(); ++i )
    {
        if (fgrade(students[i]))
        {
            fail.push_back(students[i]);
        }
        else
        {
            pass.push_back(students[i]);
        }
    }

    students = pass;
    return fail;
}


/// second try: correct but potentially slow
vector<Student_info> extract_fails(vector<Student_info> &students)
{
    vector<Student_info> fail;
    typedef vector<Student_info>::size_type v_sz;

    v_sz i = 0;

    while ( i != students.size())
    {
        if (fgrade(students[i]))
        {
            fail.push_back(student[i]);
            students.erase(students.begin + i);
        }
        else
            ++i
    }

    return fail;
}



typedef vector<Student_info>::const_iterator iter;


for ( iter = students.begin(); iter != students.end(); ++iter)
     {

     }























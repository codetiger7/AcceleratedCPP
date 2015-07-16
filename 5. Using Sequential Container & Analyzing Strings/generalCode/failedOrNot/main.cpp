#include <iostream>
#include <vector>

using namespace std;

bool fGrade(const Student_info& s);
vector<Student_info> extract_fails(vector<Student_info>& students);

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}

// predicate to determine whether a student failed
bool fGrade(const Student_info& s)
{
    return grade(s) < 60;
}


// separate passing and failing student records: first try
vector<Student_info> extract_fails(vector<Student_info>& students)
{
    vector<Student_info> pass;
    vector<Student_info> fail;

    for( vector<Student_info>::size_type i = 0; i != students.size(); ++i )
    {
        if (fGrade(students[i]))
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

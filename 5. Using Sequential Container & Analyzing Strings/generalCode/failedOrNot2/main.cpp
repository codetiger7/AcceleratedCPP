#include <iostream>
#include <vector>

using namespace std;

vector<Student_info> extract_fails(vector<Student_info>& students);

int main()
{
    vector<Student_info> students;

    for(vector<Student_info>::const_iterator iter = students.begin();
        iter != students.end(); ++iter)
    {
        cout << iter->name << endl;
    }
    return 0;
}

vector<Student_info> extract_fails(vector<Student_info>& students)
{
    vector<Student_info> fail;
    vector<Student_info>::size_type i = 0;

    // invariant: elements [0, i) of students represents passing grades
    while( i != students.size() )
    {
        if(fgrade(students[i]))
        {
            fail.push_back(students[i]);
            students.erase(students.begin() + i);
        }
        else
        {
            ++i;
        }
    }

    return fail;
}



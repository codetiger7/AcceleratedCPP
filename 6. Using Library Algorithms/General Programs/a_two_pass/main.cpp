#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;


vector<Student_info> extract_fails(vector<Student_info>& students );


int main()
{
    cout << "Hello World!" << endl;
    return 0;
}


vector<Student_info> extract_fails(vector<Student_info>& students )
{
    vector<Student_info> fail;
    remove_copy_if(students.begin(), students.end(), back_inserter(fail), pgrade );

    students.erase(remove_if(students.begin(), students.end(), fgrade), students.end());

    return fail;
}

bool pgrade(const Student_info& s)
{
    return !fgrade(s);
}

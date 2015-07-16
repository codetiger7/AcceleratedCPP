#include <iostream>
#include <vector>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}


vector<Student_info> extract_fails(vector<Student_info>& students )
{
    vector<Student_info>::iterator iter = stable_partition(students.begin(), students.end(), pgrade );

    vector<Student_info> fail(iter, students.end());
    students.erase(iter, students.end());

    return fail;
}

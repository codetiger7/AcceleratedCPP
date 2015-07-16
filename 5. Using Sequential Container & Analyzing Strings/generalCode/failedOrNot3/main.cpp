#include <iostream>
#include <vector>
using namespace std;

vector<Student_info> extract_fails(vector<Student_info>& students);
int main()
{
    cout << "Hello World!" << endl;
    return 0;
}


// version 3; iterators but no indexing; still potentially slow
vector<Student_info> extract_fails(vector<Student_info>& students)
{
    vector<Student_info> fail;
    vector<Student_info>::iterator iter = students.begin();

    while( iter != students.end() )
    {
        if(fgrade(*iter))
        {
            fail.push_back(*iter);
            iter = students.erase(iter);
        }
        else
        {
            ++iter;
        }
        return fail;
    }

}

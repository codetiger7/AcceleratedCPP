#include <iostream>
#include <list>

using namespace std;


list<Student_info> extract_fails(list<Student_info>& students);


int main()
{

    return 0;
}


list<Student_info> extract_fails(list<Student_info>& students)
{
    list<Student_info> fail;
    list<Student_info>::iterator iter = students.begin();

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
    }

    return fail;
}

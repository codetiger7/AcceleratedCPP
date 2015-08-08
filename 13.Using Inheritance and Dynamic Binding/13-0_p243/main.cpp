#include <student_info.h>

#include <algorithm>
#include <ios>              // streamsize
#include <iomanip>          // setprecision
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

using namespace std;

int main()
{
    vector<Student_info> students;
    Student_info record;
    string::size_type maxlen = 0;

    // read and store the data
    while (record.read(cin))
    {
        maxlen = max( maxlen, record.name().size());
        students.push_back(record);
    }

    // pass the version of compare that works with pointers.
    sort( students.begin(), students.end(), Student_info::compare);


    // write the names and grades
    cout << endl << endl;
    for (vector<Student_info>::size_type i = 0; i != students.size(); ++i)
    {
        cout << students[i].name()
             << string(maxlen + 1 - students[i].name().size(), ' ');

        try
        {
            double final_grade = students[i].grade();       // Grad::grade()
            streamsize prec = cout.precision();
            cout << setprecision(3) << final_grade
                 << setprecision(prec) << endl;
        }
        catch( domain_error e)
        {
            cout << e.what() << endl;
        }

    }

    cout << endl;

    return 0;
}


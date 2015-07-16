/// 4-0 c)
/// Revised grading program

#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

#include <grade.h>
#include <student_info.h>

using std::cin;
using std::cout;
using std::domain_error;
using std::endl;
using std::max;
using std::setprecision;
using std::sort;
using std::streamsize;
using std::string;
using std::vector;


int main()
{
    vector<Student_info> students;
    Student_info record;
    string::size_type maxlen = 0;

    /// invariant: students contains all the records read so far
    /// maxlen contains the length of the longest name in students
    while(read(cin, record))
    {
        maxlen = max(maxlen, record.name.size());
        students.push_back(record);
    }

    sort(students.begin(), students.end(), compare);

    for(vector<Student_info>::size_type i = 0;
        i != students.size(); ++i)
    {
        cout << students[i].name
             << string(maxlen + 1 - students[i].name.size(), ' ' );

        try
        {
            double final_grade = grade(students[i]);
            streamsize prec = cout.precision();

            cout << setprecision(3) << final_grade
                 << setprecision(prec);
        }
        catch(domain_error e)
        {
            cout << e.what();
        }

        cout << endl;
    }

    return 0;
}


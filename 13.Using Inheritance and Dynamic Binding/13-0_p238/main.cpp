#include <grad.h>

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
    vector<Grad> students;          // read and process Grad records
    Grad record;
    string::size_type maxlen = 0;

    // read and store the data
    while (record.read(cin))
    {
        maxlen = max( maxlen, record.name().size());
        students.push_back(record);
    }

    // alphabetize the student records
    sort( students.begin(), students.end(), compare);

    // write the names and grades
    cout << endl << endl;
    for (vector<Grad>::size_type i = 0; i != students.size(); ++i)
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


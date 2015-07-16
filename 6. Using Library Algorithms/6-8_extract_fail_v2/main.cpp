// 6-0
// write student-grading program
// extracts records for failing students
// using vectors,


#include <algorithm>
#include <iomanip>
#include <ios>
#include <iostream>
#include <stdexcept>
#include <string>
#include <vector>

#include <grade.h>
#include <student_info.h>
#include <fstream>


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
using std::ifstream;

using namespace std;

int main()
{

    // open tenLines.txt
    ifstream infile("tenLines.txt");

    if (!infile)
        std::cerr << "not open" << endl;

    cout << endl << endl;


    vector<Student_info> students;
    vector<Student_info> failingStudents;

    Student_info record;
    string::size_type maxlen = 0;




    /// invariant: students contains all the records read so far
    /// maxlen contains the length of the longest name in students
    while(read(infile, record))
    {
        maxlen = max(maxlen, record.name.size());
        students.push_back(record);
    }

    failingStudents = extract_fails2(students, 40);


    sort(students.begin(), students.end(), compare);
    sort(failingStudents.begin(), failingStudents.end(), compare);


    printingResults(students, maxlen);

    cout << endl << endl << endl;

    printingResults(failingStudents, maxlen);




   return 0;
}




// 5-2
// write student-grading program
// extracts records for failing students
// using vectors,

// (then another using lists, measure performance difference)
// using input files of: 10, 1000 and 10000 lines


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
#include <chrono>
#include <typeinfo>


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
using std::chrono::milliseconds;
using std::chrono::high_resolution_clock;

//using namespace std;



int main()
{

    // start timers
    auto startTime = high_resolution_clock::now();


    // open tenLines.txt
    ifstream infile("tenLines.txt");
//    ifstream infile("thousandLines.txt");
//    ifstream infile("tenThousandLines.txt");
//    ifstream infile("hundredThosandLines.txt");


    if (!infile)
        std::cerr << "not open" << endl;

    cout << endl << endl;



    contType students;
    contType failingStudents;


    Student_info record;
    string::size_type maxlen = 0;




    /// invariant: students contains all the records read so far
    /// maxlen contains the length of the longest name in students
    while(read(infile, record))
    {
        maxlen = max(maxlen, record.name.size());
        students.push_back(record);
    }

    failingStudents = extract_fails(students);


    string type = typeid(contType).name();
    if ( "NSt3__16vectorI12Student_infoNS_9allocatorIS1_EEEE" == type)
    {
//        sort(students.begin(), students.end(), compare);
//        sort(failingStudents.begin(), failingStudents.end(), compare);
    }
    else if( type == "NSt3__14listI12Student_infoNS_9allocatorIS1_EEEE")
    {
//        students.sort(students.begin(), students.end(), compare);
//        students.sort(failingStudents.begin(), failingStudents.end(), compare);
    }










    // print out of results
    for(contType::const_iterator i = students.begin(); i != students.end(); ++i)
    {
        cout << i->name
             << string(maxlen + 1 - i->name.size(), ' ' );

        try
        {
            double final_grade = grade(*i);
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


    auto finishedTime = high_resolution_clock::now();
    auto totalRunTime = std::chrono::duration_cast<milliseconds>(finishedTime - startTime).count();


    cout << "Complete run time in ms: " << totalRunTime <<  endl;



    return 0;
}


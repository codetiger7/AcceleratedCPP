#include <vector>
#include <student_info.h>
#include <iostream>
#include <analysis.h>

using namespace std;

int main()
{


    // students who did and didnt do their homework
    vector<Student_info> did;
    vector<Student_info> didnt;

    // read the student records and partition them
    Student_info student;
    while( read(cin, student))
    {
        if (did_all_hw(student))
            did.push_back(student);
        else
            didnt.push_back(student);
    }

    empty_vector("Every student did all the homework!", didnt);
    empty_vector("No student did all the homework!", did);


//    // verify that the analyses will show us something
//    if (did.empty())
//    {
//        cout << "No student did all the homework!" << endl;
//        return 1;
//    }
//    if(didnt.empty())
//    {
//        cout << "Every student did all the homework!" << endl;
//        return 1;
//    }

    // do the analyses
    write_analysis(cout, "median", median_analysis, did, didnt);
    write_analysis(cout, "average", average_analysis, did, didnt);
    write_analysis(cout, "median of homework turned in", optimistic_median_analysis,
                    did, didnt);

    cout << endl << "new analysis: " << endl;


    write_a(cout, "median", grade_aux, did, didnt);
    write_a(cout, "average", average_grade, did, didnt);
    write_a(cout, "median of homework turned in", optimistic_median, did, didnt);





    return 0;
}


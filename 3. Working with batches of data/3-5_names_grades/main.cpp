/// 3-5
/// Program keeps track of grades for several student at once
///
#include <iostream>
#include <string>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    map<string, double> studentGrades;

    while(true)
    {
        /// Prompt user
        cout << "Please write your name: ";
        string name;
        cin >> name;
        if(!cin)
            break;

        cout << "Please enter your midterm and final exam grades: ";
        double midterm;
        double finalExam;
        cin >> midterm >> finalExam;

        cout << "Please enter your homework grades: ";
        vector<double> hwVec;
        double hw;
        for(int i = 0; i != 3; ++i)
        {
            cin >> hw;
            hwVec.push_back(hw);
        }

        sort(hwVec.begin(), hwVec.end());


        double sumGrade = 0.2 * midterm + 0.4 * finalExam + 0.4 * hwVec[1];

        studentGrades[name] = sumGrade;
    }


    typedef map<string, double>::const_iterator c_it;
    c_it beg = studentGrades.begin();


    cout << "Student Names\tStudentGrades:" << endl;
    for(; beg != studentGrades.end(); ++beg)
    {
        cout << beg->first << "\t" << beg->second << endl;
    }


    return 0;
}


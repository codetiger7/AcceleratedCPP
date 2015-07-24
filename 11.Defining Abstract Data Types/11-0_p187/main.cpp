// 11-0
// page 187
// how we used a vector before

#include <student_info.h>

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    // construct a vector
    vector<Student_info> vs;    // empty vector
    vector<double> v(100);      // vector with 100 elements

    // obtain the names of the types used by the vector
    vector<Student_info>::const_iterator b;
    vector<Student_info>::const_iterator e;
    vector<Student_info>::size_type i = 0;

    // use size and the index operator to look at each element in the vector
    for( i = 0; i != vs.size(); ++i)
        cout << vs[i].name();

    // return iterators positioned on the first and one past the last element
    b = vs.begin();
    e = vs.end();


    cout << "Hello World!" << endl;
    return 0;
}


#include <iostream>
#include <stdexcept>
#include <vector>

using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    return 0;
}


// compute a student's overall grade from midterm and final exam grades
// and vector of homework grades
// this function does not copy it's vector argument because median does so
double grade(double midterm, double final, const vector<double>& hw )
{
    if(hw.size() == 0)
    {
        throw domain_error("Student has done no homework");
    }

    return grade(midterm, final, median(hw));
}


// read homework grades from and input stream into a vector<double>
istream& read_hw(istream& in, vector<double>& hw)
{
    if(in)
    {
        // get rid of previous contents
        hw.clear();

        // read homework grades
        double x;
        while(in >> x)
        {
            hw.push_back(x);
        }

        // clear the stream so that input will work for the next student
        in.clear();
    }
    return in;
}




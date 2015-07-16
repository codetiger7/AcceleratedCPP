// include directives and using-declarations for library facilities
#include <iostream>
#include <vector>
#include <stdexcept>
#include <iomanip>
using namespace std;

// code for median function from /53
double median(vector<double> vec);

// code for grade(double, double, double) function from /52
double grade( double midterm, double final, double homework);

// code for grade(double, double, const vector<double>&) function from /54
double grade( double midterm, double final, const vector<double>& hw);

// code for read_hw(istream&, vector<double>&) function from /57
istream& read_hw(istream& in, vector<double>& hw);


int main()
{
    // ask for and read the student's name
    cout << "Please enter your first name: ";
    string name;
    cin >> name;
    cout << "Hello, " << name << "!" << endl;

    // ask for and read the midterm and final grades
    cout << "Please enter your midterm and final exam grades: ";
    double midterm;
    double final;
    cin >> midterm >> final;

    // ask for the homework grades
    cout << "Enter all your homework grades, "
            "followed by end-of-file: ";

    vector<double> homework;

    // read the homework grades
    read_hw(cin, homework);

    // compute and generate the final grade, if possible
    try
    {
        double final_grade = grade(midterm, final, homework);
        streamsize prec = cout.precision();
        cout << "Your final grade is " << setprecision(3)
             << final_grade << setprecision(prec) << endl;
    }
    catch(domain_error)
    {
        cout << endl << "You must enter your grades. "
                "Please try again." << endl;
        return 1;
    }

    return 0;
}



// read homework grades from input stream into a vector double
istream& read_hw(istream &in, vector<double> &hw)
{
    if(in)
    {
        // get rid of previous content
        hw.clear();

        // read homework grades
        double x;
        while( in >> x)
        {
            hw.push_back(x);
        }

        // clear the stream so that input will work for the next student
        in.clear();
    }
    return in;
}


// compute students overall grade form midterm, final
// and vector of homework grades
// this function does not copy vector because median does so for us
double grade(double midterm, double final, const vector<double> &hw)
{
    if (hw.size() == 0)
    {
        throw domain_error("Student has done no homework");
    }

    return grade(midterm, final, median(hw));
}


// compute a stdents overall grade from midterm and final exma grades and homeowrk grade
double grade(double midterm, double final, double homework)
{
    return 0.2 * midterm + 0.4 * final + 0.4 * homework;
}

// compute the median of a vector<double>
// note that calling this function copies the entire argument
double median(vector<double> vec)
{
    typedef vector<double>::size_type vec_sz;

    vec_sz size = vec.size();

    if (size == 0)
    {
        throw domain_error("median of an empty vector");
    }

    sort(vec.begin(), vec.end());
    vec_sz mid = size/2;

    return size % 2 == 0 ? (vec[mid] + vec[mid-1])/2 : vec[mid];
}

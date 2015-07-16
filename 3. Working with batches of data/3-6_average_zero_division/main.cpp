/// 3-6
/// average computation might divide by zero
/// what does your program do in this case?
///     it gives a nan value
/// rewrite so that behaviour does not depend on implementation

/// Computing Students Grades, Average : page 35-36
/// rewrite zero handling

#include <iomanip>  /// setprecision
#include <ios>      /// streamsize
#include <iostream>
#include <string>

using std::cin;         using std::setprecision;
using std::cout;        using std::string;
using std::endl;        using std::streamsize;


int main()
{
    // ask for and read the student's name
    cout << "Please enter your first name: ";
    string name;
    cin >> name;
    cout << "Hello, " << name << "!" << endl;

    /// ask for and read the midterm and final grades
    cout << "Please enter your midterm and final exam grades: ";
    double midterm = 0;
    double final = 0;
    cin >> midterm >> final;

    /// ask for the homework grades
    cout << "Enter all your homework grades, "
            "followed by end-of-file: ";

    /// the number and sum of grades read so far
    int count = 0;
    double sum = 0;

    /// a vairable into which to read
    double x;

    /// invariant:
    /// we have read count grades so far
    /// sum is the sum of the first count grades
    while( cin >> x)
    {
        ++count;
        sum += x;
    }

    if(count == 0)
    {
        cout << "\n\nNo homework was entered please try again" << endl;
        return 1;
    }

    /// write result
    streamsize prec = cout.precision();
    cout << "Your final grade is " << setprecision(3)
         << 0.2 * midterm + 0.4 * final + 0.4 * sum / count
         << setprecision(prec) << endl;

    return 0;
}


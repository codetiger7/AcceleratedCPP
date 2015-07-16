#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <stdexcept>
#include <ios>
#include <iomanip>

using namespace std;


struct Student_info
{
    string name;
    double midterm;
    double final;
    vector<double> homework;
};

istream& read_hw(istream& in, vector<double>& hw)
{
    if(in)
    {
        hw.clear();

        double x;
        while(in >> x)
            hw.push_back(x);

        in.clear();
    }

    return in;
}

istream& read(istream& is, Student_info& s)
{
    /// read and store the student's name and midterm and final exam grades
    is >> s.name >> s.midterm >> s.final;

    read_hw(is, s.homework);        /// read and store all the student's homework grades

    return is;
}

bool compare( const Student_info& x, const Student_info& y)
{
    return x.name < y.name;
}

double grade(double midterm, double final, double homework)
{
    return 0.2 * midterm + 0.4 * final + 0.4 * homework;
}

double median(vector<double> vec)
{
    typedef vector<double>::size_type vec_sz;
    vec_sz size = vec.size();
    if (size == 0)
        throw domain_error("median of an empty vector");

    sort(vec.begin(), vec.end());

    vec_sz mid = size / 2;

    return size % 2 == 0 ? (vec[mid] + vec[mid-1])/2 : vec[mid];
}

double grade(double midterm, double final, const vector<double>& hw)
{
    if(hw.size() == 0)
        throw domain_error("student has done no homework");

    return grade(midterm, final, median(hw));
}


double grade(const Student_info& s)
{
    return grade(s.midterm, s.final, s.homework);
}


int main()
{
    vector<Student_info> students;
    Student_info record;
    string::size_type maxlen  = 0;

    /// read and store all the records, and find the length of the longest name
    while( read(cin, record))
    {
        maxlen = max(maxlen, record.name.size());
        students.push_back(record);
    }

    /// alphabetize the records
    sort(students.begin(), students.end(), compare);

    for(vector<Student_info>::size_type i = 0;
        i != students.size(); ++i)
    {
        /// write the name, padded on the right to maxlen + 1 characters
        cout << students[i].name
             << string(maxlen+1 - students[i].name.size(), ' ');

        /// compute and write the grade
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


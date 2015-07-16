// exercise 3-5
// track grades for several students at once
// two vectors, student names, final grades
// fixed number of homework grades

#include <vector>
#include <iostream>
#include <string>
using namespace std;

iostream enterName(vector<string>& names);
void enterGrades(vector<double>& grades);
void printGrades(vector<string>&names, vector<double>&grades);

int main()
{
    // vectors to hold student names and grades
    vector<string> names;
    vector<double> grades;
    string name;

    cout << "Enter student name: ";

    while( cin >> name )
    {
        cout << endl;
        names.push_back(name);
        enterGrades(grades);

        cout << "Enter new student name: ";
    }

    cout << endl << endl;
    printGrades(names, grades);

    return 0;
}
void printGrades(vector<string>& names, vector<double>& grades)
{
    for(size_t i = 0; i != names.size(); ++i )
    {
        cout << names[i] << ": " << grades[i] << endl;
    }

}


void enterGrades(vector<double>& grades)
{
    double final;
    double midterm;
    double hw1;
    double hw2;
    double medHw;
    double resultGrade;

    cout << "Enter grades: final, midterm, then first and second homework grades: ";
    cin >> final >> midterm >> hw1 >> hw2;

    medHw = (hw1 + hw2) / 2.0;
    resultGrade = 0.4*final + 0.2 * midterm + 0.4 * medHw;

    grades.push_back(resultGrade);

}




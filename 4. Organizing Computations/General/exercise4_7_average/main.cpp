#include <iostream>
#include <vector>

using namespace std;

int main()
{
    double darray[] = {4.3, 4.9, 5.5, 6.5, 3.3, 5.0, 0.4, 3.2, 1.2, 3.2 };
    vector<double> dvec(darray, darray+10);

    // store vector sum
    double sum = 0;

    for(vector<double>::size_type i = 0; i != dvec.size(); ++i )
    {
        sum += dvec[i];
    }

    std::cout << std::endl;

    if ( dvec.size() > 0)
        std::cout << "the average is: " << sum / dvec.size() << std::endl;

    return 0;
}

// exercise 4-8
// the return type of f can be stored as a double; or implicitly converted to a double

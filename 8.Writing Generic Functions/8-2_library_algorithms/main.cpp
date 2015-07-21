#include <iostream>
#include <list>
#include <median.h>
#include <string>
#include <vector>

#include <library.hpp>

using namespace std;

int main()
{


    /// equal() test ======================================================
    /// @todo  equal does not work correctly with objects of different length
    vector<int> a;
    a.push_back(3);
    a.push_back(9);
    a.push_back(12);

    vector<int> b;
    b.push_back(3);
    b.push_back(3);
    b.push_back(12);

    bool eq = equal(a.begin(), a.end(), b.begin());

    if (eq)
        cout << endl << "Objects are equal" << endl << endl;
    else
        cout << endl << "Not Equal" << endl << endl;
    /// ====================================================================



    // find( b, e, t) test
    string sentence = "Isn't it about equality?";
    string sentence2 = "wild lions live alone";
    typedef string::const_iterator iter;

//    iter value = find(sentence.begin(), sentence.end(), 'q');
    iter value2 = find(sentence2.begin(), sentence2.end(), 'x');

    if( value2 != sentence2.end())
        cout << "we found the character: " << *value2 << endl;
    else
        cout << "No character like that in string" << endl;

    cout  << endl;




    string sa[] = { "juggling", "is", "an", "interesting", "pursuit" };
    vector<string> source(sa, sa + 5);
    vector<string> destination;

    copy(source.begin(), source.end(), back_inserter(destination));

    vector<string>::const_iterator it = destination.begin();
    while( it != destination.end())
    {
        cout << *it++ << " ";
    }

    cout << endl << endl;

    string cpstring = "I want to be awesome at C++";
    string srcString;

    copy(cpstring.begin(), cpstring.end(), back_inserter(srcString));

    string::const_iterator sit = srcString.begin();
    while( sit != srcString.end())
    {
        cout << *sit++ << " ";
    }
    // ====================================================================


    /// remove_copy_if(b, e, d, p) test ======================================
    int ia[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14 };
    list<int> rciTest( ia, ia + 14);
    list<int> rciDest;



    remove_copy_if(rciTest.begin(), rciTest.end(), back_inserter(rciDest), evenNumb);


    typedef list<int>::const_iterator l_it;
    l_it listIter = rciDest.begin();
    cout << endl << endl;

    //
    cout << "Container list - no even numbers:\n";
    while (listIter != rciDest.end())
    {
        cout << *listIter++ << " ";
    }
    cout << endl;

    cout << "\nOriginal container:";

    listIter = rciTest.begin();
    cout << endl;
    while (listIter != rciTest.end())
    {
        cout << *listIter++ << " ";
    }
    cout << endl;
    // ====================================================================


    /// transform(b, e, d, f) test ======================================
    double a1[] = { 23.3, 234, 38.4, 984.34, 3487.23, 2783864.43};
    double a2[] = { 273.23, 2.89, 97.9 };
    double a3[] = { 837.23, 3892.39};
    vector<double> s1( a1, a1 + 5);
    vector<double> s2(a2, a2 + 3);
    vector<double> s3(a3, a3 + 2);

    vector<vector<double> > students;
    students.push_back(s2);
    students.push_back(s1);
    students.push_back(s3);

    vector<double> results;
    transform(students.begin(), students.end(), back_inserter(results), median );

    typedef vector<double>::size_type v_sz;

    cout << "\nMedians of 3 vectors: " << endl;
    for( v_sz i = 0; i != results.size(); ++i)
        cout << results[i] << " ";
    cout << endl;
    // ====================================================================



    /// accumulate(b, e, t) test ======================================
    int acArray[] = { 23, 2, 3, 22, 33, 20};
    double acArray2[] = { 4.23, 9.87, 0.76, 98.32, 33.88, 98.97};

    list<int> acc( acArray, acArray + 6);
    list<double> acc2( acArray2, acArray2 + 6);

    int sum = accumulate(acc.begin(), acc.end(), 0);
    double sum2 = accumulate(acc2.begin(), acc2.end(), 0.0);

    cout << "\nAccumulate:\n";
    cout << "sum: " << sum << endl;
    cout << "sum2: " << sum2 << endl;
    /// ====================================================================


    /// search(b, e, b2, e2) test ======================================
    string word = "dear";
    string wsentence = "How are you dear? I'm fine!";

    typedef string::const_iterator cit;
    cit searchit = search(wsentence.begin(), wsentence.end(), word.begin(), word.end());

    cout << "\ntesting search(): " << endl;

    if (searchit == wsentence.end())
        cout << "the word: " << word << " was NOT found" << endl;
    else
    {
        cout << "the word found was: ";
        cit searchitend = searchit + word.size();

        while( searchit != searchitend )
        {
            cout << *searchit;
            ++searchit;
        }
    }

    cout << endl << endl;
    /// ====================================================================

    /// find_if(b, e, p) test ======================================

    double da[] = { 93.8, 48.6, 85.3, 89.1, 39.9, 95.6, 89.99};
    vector<double> dvec(da, da + 7 );

    typedef vector<double>::const_iterator c_it;
    c_it findIf = find_if(dvec.begin(), dvec.end(), largerThan);



    cout << "find_if() results: " << endl;
    if (findIf == dvec.end())
        cout << "no value found that fullfills predicate" << endl;
    else
        cout << "find_if() function has found value: " << *findIf << endl;

    /// ====================================================================

    /// remove_copy(b, e, d, t) test =======================================

    string rmcString = "Muhahaha this is a test of a strange function called remove_copy!";
    string noAString;

    remove_copy(rmcString.begin(), rmcString.end(), back_inserter(noAString), 'a' );

    cout << endl;
    cout << "remove_copy test: " << endl;
    cout << noAString << endl;

    /// ====================================================================

    /// remove(b, e, t) test =======================================
    cout << endl;
    int remArray[] = { 3, 2, 0, 3, 4, 0, 4, 3, 0, 483, 0, 34, 0, 0, 0, 3, 22, 33, 20};
    list<int> rem( remArray, remArray + 19);

    typedef list<int>::const_iterator lcit;
    lcit lbeg = rem.begin();

    cout << "remove() not used on list: " << endl;
    while (lbeg != rem.end())
    {
        cout << *lbeg << " ";
        ++lbeg;
    }

   lcit lastEl = remove(rem.begin(), rem.end(), 0);

    lbeg = rem.begin();
    cout << "\n\nremove() NOW Implemented!: " << endl;
    while (lbeg != rem.end())
    {
        cout << *lbeg << " ";
        ++lbeg;
    }


    cout << "\n\nlast element: " << *lastEl << endl;

    --lastEl;
    cout << "\nlast valid element: " << *lastEl << endl;



    /// ===============================================================

    /// partition(b, e, p) test =======================================

    cout << endl;
    partition(rem.begin(), rem.end(), passed);


    lbeg = rem.begin();
    cout << "\n\npartition() NOW Implemented!: " << endl;
    while (lbeg != rem.end())
    {
        cout << *lbeg << " ";
        ++lbeg;
    }


    cout << endl << endl;




    return 0;
}


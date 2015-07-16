#include <phelpers.h>
#include <vector>
#include <string>
#include <algorithm>


using std::string;
using std::vector;

std::vector<Pline> permutations(vector<string> svec)
{
    vector<Pline> perm;

    vector<string>::size_type i = 0;

    while( i != svec.size())
    {
        string s;
        typedef vector<string>::size_type v_sz;
        for( v_sz j = 0; j != svec.size(); ++j)
        {
            s += svec[j];
            s += " ";
        }

        Pline p;
        p.line = s;
        p.markerPos = i;

        perm.push_back(p);

        rotate(svec.begin(), svec.begin()+1 ,svec.end());

        ++i;
    }

    sort( perm.begin(), perm.end() );

    return perm;
}

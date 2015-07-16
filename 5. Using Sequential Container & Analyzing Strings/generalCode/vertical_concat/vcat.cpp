#include <vcat.h>
#include <vector>
#include <string>

using std::vector;
using std::string;

vector<string>
vcat(const vector<string>& top, const vector<string>& bottom )
{
    /// copyt the top picture
    vector<string> ret =  top;

    /// copy entire bottom picture
    ret.insert(ret.end(), bottom.begin(), bottom.end());

    return ret;
}



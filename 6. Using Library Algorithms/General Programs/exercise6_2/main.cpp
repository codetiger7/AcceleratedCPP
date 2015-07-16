// testing find urls
// protocol-name://resource-name

#include <iostream>
#include <vector>
#include <string>

#include <functions.h>


using namespace std;

int main()
{
    string urlAddresses = "crazed fun but not dancing http://briancatch.com https://brianopedal.com "
            " try it again htttp://google.com we have dace ://";

    vector<string> urls = find_urls(urlAddresses);

    vector<string>::const_iterator it = urls.begin();

    while( it != urls.end() )
    {
        cout << *it << endl;

        ++it;
    }




    return 0;
}


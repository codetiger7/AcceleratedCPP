// Given implementation of frame p.93
// and code fragment, v, frame(v)
// 1.Describe what happens in this call
// 2.Trace how the width function operate
// 3.Trace how the frame function operate
// 4.Run code
// 5.If different result than expected, change code, to math expectation


// 1) a) empty vector that holds strings created
// b) frame is called with the empty vector as an argument
// c)

#include <iostream>
#include <vector>
#include <frame.h>

using namespace std;

int main()
{
    vector<string> v;
    frame(v);

    // temp that frame returns holds two strings each with ****, ****
    // frame prints nothing.


    return 0;
}


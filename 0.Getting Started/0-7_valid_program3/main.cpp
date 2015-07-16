/// 0-7
/// Legal program?
/// why/why not?
/// it is not legal because
/// /* threats everything as text until the next */ closing
/// here we close and do not open with a new /* at the beginning of "as its starting"
#include <iostream>

int main()
{
    /* test
     * cool */
    /*test2
     * dvd /* cool */

    /*test3
     * what /* is */

    /*  This is a comment that extends over several lines
        because it uses /* and */ as its starting and ending delimiters */

    std::cout << "Does this work?" << std::endl;
    return 0;
}


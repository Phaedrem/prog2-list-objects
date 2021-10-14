/*
 * replace with your comment header
 */

#ifndef MYLIST_H
#define MYLIST_H

#include <iostream>     /* cout, endl */
#include <stdlib.h>     /* srand, rand, atoi */
#include <time.h>       /* time */
// you can add libraries if you need them, but you shouldn't

// DO NOT MODIFY THESE DEFINES
#define RMIN 1
#define RMAX 10

class MyList {
public:
    // DO NOT MODIFY THESES NEXT TWO
    MyList(int); // constructor
    ~MyList(); // destructor

    /*
     * TODO write your getter prototypes here
     * and erase this comment
     */

    /*
     * TODO write your setter prototypes here
     * and erase this comment
     */

    /*
     * TODO write your display methods here
     * and erase this comment
     */

private:
    // these are the only attributes allowed
    // DO NOT ADD OR MODIFY THEM
    int length;
    int *array;
};

#endif //MYLIST_H

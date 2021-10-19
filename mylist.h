/*********************
Name: Darren Bowers
Coding 05
Purpose: Program to create a list like object that behaves similarly to the List object in Python as an introduction to classes and objects.
**********************/

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

int getElement(int);

void setArray(int);

bool setElement(int, int);

void setRandom(int, int);

void printArray();

    /*
     * TODO write your display methods here
     * and erase this comment
     */

private:
    void initList();
    // these are the only attributes allowed
    // DO NOT ADD OR MODIFY THEM
    int length;
    int *array;
};

#endif //MYLIST_H

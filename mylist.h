/*********************
Name: Darren Bowers
Coding 05 / 06
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
#define DEFAULTSIZE 1
#define DEFAULTELEMENT 0

class MyList {
public:
    // DO NOT MODIFY THESES NEXT TWO
    MyList(int); // constructor
    ~MyList(); // destructor

int getElement(int);
bool getElement(int, int*);
void setArray(int);
bool setElement(int, int);
void setRandom(int, int);
void printArray();
bool resizeArray(int);
int getLength();
bool getSorted();

private:

    int length;
    int *array;

    void swap(int*, int*);
    bool inRange(int);
    bool sorted;

};

#endif //MYLIST_H

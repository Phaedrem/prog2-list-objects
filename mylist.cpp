/*********************
Name: Darren Bowers
Coding 05
Purpose: Program to create a list like object that behaves similarly to the List object in Python as an introduction to classes and objects.
**********************/

#include "mylist.h"

// constructor
MyList::MyList(int size) {
    srand(time(NULL));  // call only once!
    array = new int[size];
    for(int i=0; i<size; i++){
        array[i] = 0;
    }
}

// destructor
MyList::~MyList() {
    delete[] array;
}

/*
 * TODO write the rest of your methods here
 * remember, each method must begin with MyList::
 */


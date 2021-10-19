/*********************
Name: Darren Bowers
Coding 05
Purpose: Program to create a list like object that behaves similarly to the List object in Python as an introduction to classes and objects.
**********************/

#include "mylist.h"

// constructor
MyList::MyList(int size) {
    srand(time(NULL));  // call only once!
    length = size;
    initList();
}

// destructor
MyList::~MyList() {
    delete[] array;
}

void MyList::initList(){
    array = new int[length];
    for(int i=0; i<length; i++){
        array[i] = 0;
    }
}

int MyList::getElement(int){
    return 0;
}

bool setElement(int, int){
    return true;
}

void setRandom(int, int){
}

/*
 * TODO write the rest of your methods here
 * remember, each method must begin with MyList::
 */


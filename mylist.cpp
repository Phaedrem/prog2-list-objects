/*********************
Name: Darren Bowers
Coding 05
Purpose: Program to create a list like object that behaves similarly to the List object in Python as an introduction to classes and objects.
**********************/

#include "mylist.h"

// constructor
MyList::MyList(int size) {
    srand(time(NULL));  // call only once!
    if(size <= 0){
        length = DEFAULTSIZE; 
    } else{
        length = size;
    }
    array = new int[length];
    for(int i=0; i<length; i++){
        array[i] = 0;
    }
}

// destructor
MyList::~MyList(){
    delete[] array;
}

int MyList::getElement(int index){
    return 0;
}

void MyList::setArray(int value){
    for(int i=0; i<length; i++)
        array[i] = value;
}

bool MyList::setElement(int value, int index){
    return true;
}

void MyList::setRandom(int minimum, int maximum){
}

void MyList::printArray(){
    std::cout << "[";
    for(int i=0; i< length; i++){
        std::cout << array[i] << " ";
    }
    std::cout << "\b]" << std::endl;
}

/*
 * TODO write the rest of your methods here
 * remember, each method must begin with MyList::
 */


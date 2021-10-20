/*********************
Name: Darren Bowers
Coding 05
Purpose: Program to create a list like object that behaves similarly to the List object in Python as an introduction to classes and objects.
**********************/

#include "mylist.h"

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
    bool pos = true;
    if(index < 0 || index > length-1){
        pos = false;
    } else{
        array[index] = value;
    }
    return pos;
}

void MyList::setRandom(int valueOne, int valueTwo){
    int min;
    int max;
    if(valueOne == valueTwo || valueOne < 1 || valueTwo < 1){
        min = RMIN;
        max = RMAX;
    } else if(valueOne > valueTwo){
        min = valueTwo;
        max = valueOne;
    } else{
        min = valueOne;
        max = valueTwo;
    }
    for(int i=0; i<length; i++){
        array[i] = rand() % (min - max + 1) + min;
    } 
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


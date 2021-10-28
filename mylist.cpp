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
    setArray(0);
}

MyList::~MyList(){
    delete[] array;
}

int MyList::getElement(int index){
    int element;
    if(index < 0 || index > length-1){
        throw 0;
    }
    return element = array[index];
}

bool MyList::getElement(int index, int *iptr){
    bool pos = false;
    if(index >= 0 && index < length){
        *iptr = array[index];
        pos = true;
    }
    return pos;
}


void MyList::setArray(int value){
    for(int i=0; i<length; i++)
        array[i] = value;
}

bool MyList::setElement(int value, int index){
    bool pos = false;
    if(index >= 0 && index < length){
        pos = true;
        array[index] = value;
    }
    return pos;
}

void MyList::setRandom(int valueOne, int valueTwo){
    if(valueOne == valueTwo || valueOne < 1 || valueTwo < 1){
        valueOne = RMIN;
        valueTwo = RMAX;
    } else if(valueOne > valueTwo){
        swap(&valueOne, &valueTwo);
    }
    for(int i=0; i<length; i++){
        array[i] = rand() % (valueOne - valueTwo + 1) + valueOne;
    } 
}

void MyList::printArray(){
    std::cout << "[";
    for(int i=0; i< length; i++){
        std::cout << array[i] << " ";
    }
    std::cout << "\b]" << std::endl;
}

void MyList::swap(int *n1, int *n2){
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}

bool MyList::resizeArray(int size){
    bool pos = false;
    if(size != length && size >= 1){
        pos = true;
        int *temparray = new int[size];
        for(int i = 0; i<size; i++){
            temparray[i] = array[i];
        }
        delete[] array;
        array = temparray;
        for(int i = length; i<size; i++){
            array[i] = 0;
        }
        length = size;
    }

    return pos;
}
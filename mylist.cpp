/*********************
Name: Darren Bowers
Coding 05 / 06
Purpose: Program to create a list like object that behaves similarly to the List object in Python as an introduction to classes and objects.
**********************/

#include "mylist.h"

/*********************************
CONSTRUCTORS / DESTRUCTORS
*********************************/

MyList::MyList(int size) {
    srand(time(NULL));  // call only once!
    length = size > 0 ? size : DEFAULTSIZE;
    array = new int[length];
    setArray(DEFAULTELEMENT);
}

MyList::~MyList(){
    delete[] array;
}

/*********************************
PRIVATE
*********************************/

void MyList::swap(int *n1, int *n2){
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}


/*********************************
PUBLIC
*********************************/

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

bool MyList::resizeArray(int size){
    bool flag = false;
    if(size != length && size >= 1){
        flag = true;
        int *temparray = new int[size];
        if(size > length){
            for(int i = 0; i<length; i++){
                temparray[i] = array[i];
            }
            for(int i = length; i<size; i++){
                temparray[i] = DEFAULTELEMENT;
            }
        } else{
            for(int i = 0; i<size; i++){
                temparray[i] = array[i];
            }
        }
        delete[] array;
        array = temparray;
        length = size;
    }

    return flag;
}
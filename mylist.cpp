/*********************
Name: Darren Bowers
Coding 05 / 06
Purpose: Program to create a list like object that behaves similarly to the List object in Python as an introduction to classes and objects.
**********************/

#include "mylist.h"

/*********************************
CONSTRUCTORS / DESTRUCTORS
*********************************/

MyList::MyList(int size){
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

bool MyList::inRange(int index){
    return index >= 0 && index < length;
}

void MyList::swap(int *n1, int *n2){
    int temp = *n1;
    *n1 = *n2;
    *n2 = temp;
}


/*********************************
PUBLIC
*********************************/

int MyList::getElement(int index){
    if(!inRange(index)){
        throw 0;
    }
    return array[index];
}

bool MyList::getElement(int index, int *element){
    bool okay = false;
    if(inRange(index)){
        *element = array[index];
        okay = true;
    } else{
        *element = 0;
    }
    return okay;
}


void MyList::setArray(int value){
    for(int i=0; i<length; i++)
        array[i] = value;
        sorted = true;
}

bool MyList::setElement(int value, int index){
    bool set = false;
    if(inRange(index)){
        array[index] = value;
        set = true;
        if(array[index] < array[index]-1 || array[index] > array[index]+1){
            sorted = false;
        }
    }
    return set;
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
    sorted = false; 
}

void MyList::printArray(){
    std::cout << "[";
    for(int i=0; i< length; i++){
        std::cout << array[i] << " ";
    }
    std::cout << "\b]" << std::endl;
}

bool MyList::resizeArray(int newSize){
    bool resized = false;
    if(newSize > 0 && newSize != length){
        int *tempArray = new int[newSize];
        int min = std::min(newSize, length); //NEW LINE grabs the lower value
        for(int i = 0; i<min; i++){
            tempArray[i] = array[i];
        }
        for(int i = length; i<newSize; i++){
            tempArray[i] = DEFAULTELEMENT;
        }
        delete[] array;
        if(newSize > length){
            sorted = false;
        }
        array = tempArray;
        length = newSize;
        resized = true;
    }
    return resized;
}

int MyList::getLength(){
    return length;
}

bool MyList::getSorted(){
    return sorted;
}

void MyList::sort(){
    if(sorted == false){
        int i, j, minindex; 
        for(i = 0; i < length-1; i++){ 
            minindex = i; 
            for(j = i+1; j < length; j++){
                if(array[j] < array[minindex]){
                    minindex = j; 
                }
            }
            swap(&array[minindex], &array[i]); 
            sorted = true;
        }
    } 
}
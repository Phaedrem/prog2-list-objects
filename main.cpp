/*********************
Name: Darren Bowers
Coding 05 / 06
Purpose: Program to create a list like object that behaves similarly to the List object in Python as an introduction to classes and objects.
**********************/

#include "main.h"

int main(int argc, char** argv) {
    int element = 0; 
    /* This will create a "list" of size LISTSIZE
     * and initialize it to all zeros */
    cout << endl << "Creating and initializing mylist" << endl;
    MyList mylist(LISTSIZE);
    mylist.printArray();
    if(mylist.getSorted()){
        cout << "List is currently sorted" << endl;
        cout << "The length of the list is " << mylist.getLength() << endl;
    } else{
        cout << "List is unsorted" << endl;
        cout << "Sorting array" << endl;
        mylist.sort();
        mylist.printArray();
        cout << "The length of the list is " << mylist.getLength() << endl;
    }
    cout << endl;

    /* This will set the list to all 50 */
    cout << "Setting mylist to all 50" << endl;
    mylist.setArray(50);
    mylist.printArray();
    if(mylist.getSorted()){
        cout << "List is currently sorted" << endl;
        cout << "The length of the list is " << mylist.getLength() << endl;
    } else{
        cout << "List is unsorted" << endl;
        cout << "Sorting array" << endl;
        mylist.sort();
        mylist.printArray();
        cout << "The length of the list is " << mylist.getLength() << endl;
    }
    cout << endl;

    /* This will fail and set the array to the
     * default random 1-10 values */
    cout << "Attempting to set to random numbers between -2 to 4" << endl;
    mylist.setRandom(-2,4);
    mylist.printArray();
    if(mylist.getSorted()){
        cout << "List is currently sorted" << endl;
        cout << "The length of the list is " << mylist.getLength() << endl;
    } else{
        cout << "List is unsorted" << endl;
        cout << "Sorting array" << endl;
        mylist.sort();
        mylist.printArray();
        cout << "The length of the list is " << mylist.getLength() << endl;
    }
    cout << endl;

    /* This will fail and set the array to the
     * default random 1-10 values */
    cout << "Attempting to set to random numbers between 4 to 4" << endl;
    mylist.setRandom(4,4);
    mylist.printArray();
    if(mylist.getSorted()){
        cout << "List is currently sorted" << endl;
        cout << "The length of the list is " << mylist.getLength() << endl;
    } else{
        cout << "List is unsorted" << endl;
        cout << "Sorting array" << endl;
        mylist.sort();
        mylist.printArray();
        cout << "The length of the list is " << mylist.getLength() << endl;
    }
    cout << endl;

    /* This will set the list to all 50 */
    cout << "Setting mylist to all 250" << endl;
    mylist.setArray(250);
    mylist.printArray();
    if(mylist.getSorted()){
        cout << "List is currently sorted" << endl;
        cout << "The length of the list is " << mylist.getLength() << endl;
    } else{
        cout << "List is unsorted" << endl;
        cout << "Sorting array" << endl;
        mylist.sort();
        mylist.printArray();
        cout << "The length of the list is " << mylist.getLength() << endl;
    }
    cout << endl;

    /* This will succeed and set the array to the
     * random 1-100 values */
    cout << "Attempting to set to random numbers between 1 to 100" << endl;
    mylist.setRandom(1,100);
    mylist.printArray();
    if(mylist.getSorted()){
        cout << "List is currently sorted" << endl;
        cout << "The length of the list is " << mylist.getLength() << endl;
    } else{
        cout << "List is unsorted" << endl;
        cout << "Sorting array" << endl;
        mylist.sort();
        mylist.printArray();
        cout << "The length of the list is " << mylist.getLength() << endl;
    }
    cout << endl;

    /* This will succeed and set the array to the
     * random 500-1000 values */
    cout << "Attempting to set to random numbers between 500 to 1000" << endl;
    mylist.setRandom(1000,500);
    mylist.printArray();
    if(mylist.getSorted()){
        cout << "List is currently sorted" << endl;
        cout << "The length of the list is " << mylist.getLength() << endl;
    } else{
        cout << "List is unsorted" << endl;
        cout << "Sorting array" << endl;
        mylist.sort();
        mylist.printArray();
        cout << "The length of the list is " << mylist.getLength() << endl;
    }
    cout << endl;

    /* These next two sets will succeed and set the 1st and last
     * elements to 1000 and 2000 respectively */
    cout << "Attempting to set first element to 1000" << endl; 
    if(mylist.setElement(1000, 0)){
        cout << "Element Set" << endl;
    } else {
        cout << "Element NOT Set" << endl;
    }
    cout << "Attempting to set last element to 2000" << endl; 
    if(mylist.setElement(2000, LISTSIZE-1)){
        cout << "Element Set" << endl;
    } else {
        cout << "Element NOT Set" << endl;
    }
    mylist.printArray();
    if(mylist.getSorted()){
        cout << "List is currently sorted" << endl;
        cout << "The length of the list is " << mylist.getLength() << endl;
    } else{
        cout << "List is unsorted" << endl;
        cout << "Sorting array" << endl;
        mylist.sort();
        mylist.printArray();
        cout << "The length of the list is " << mylist.getLength() << endl;
    }
    cout << endl;

    /* These next two sets will fail and leave the array unmodified */
    cout << "Attempting to set elements out of index range" << endl;
    if(mylist.setElement(9999, -1)){
        cout << "Element Set" << endl;
    } else {
        cout << "Element NOT Set" << endl;
    }
    if(mylist.setElement(9999, LISTSIZE)){
        cout << "Element Set" << endl;
    } else {
        cout << "Element NOT Set" << endl;
    }
    mylist.printArray();
    if(mylist.getSorted()){
        cout << "List is currently sorted" << endl;
        cout << "The length of the list is " << mylist.getLength() << endl;
    } else{
        cout << "List is unsorted" << endl;
        cout << "Sorting array" << endl;
        mylist.sort();
        mylist.printArray();
        cout << "The length of the list is " << mylist.getLength() << endl;
    }
    
    cout << endl << "Testing Coding06 new and/or modified code..." << endl << endl;

    cout << "Printing the array element by element using: int getElement(int);" << endl << "(going one too far to test out of range)" << endl;
    for(int i=0; i<LISTSIZE+1; i++){
        try{
            cout << mylist.getElement(i) << endl;
        } catch(...){
            cout << "Error, out of range" << endl;
        }    
    }
    cout << endl;

    cout << "Attempting to get element [LISTSIZE * 1.5] using: int getElement(int);" << endl;
    try{
        cout << mylist.getElement((LISTSIZE * 1.5)) << endl;
    } catch(...){
        cout << "Error, out of range" << endl;
    } 
    cout << endl;

    cout << "Printing the array element by element using: bool getElement(int, int*);" << endl << "(going one too far to test out of range)" << endl;
    for(int i=0; i<LISTSIZE+1; i++){
        if(mylist.getElement(i, &element)){
            cout << element << endl;
        } else{
        cout << "Error, out of range" << endl;
        }   
    }
    cout << endl;

    cout << "Attempting to get element [LISTSIZE * 1.5] using: bool getElement(int, int*);" << endl;
    if(mylist.getElement((LISTSIZE * 1.5), &element)){
        cout << element << endl;
    } else{
        cout << "Error, out of range" << endl;
    }  
    cout << endl;

    cout << "Resizing array to LISTSIZE" << endl;
    if(mylist.resizeArray(LISTSIZE)){
        cout << "Resized..." << endl;
        mylist.printArray();
    } else{
        cout << "Failed to resize" << endl;
    }
    cout << "The current length of the array is " << mylist.getLength() << endl;
    if(mylist.getSorted()){
        cout << "List is currently sorted" << endl;
    } else{
        cout << "List is unsorted" << endl;
        cout << "Sorting array" << endl;
        mylist.sort();
        mylist.printArray();
    }
    cout << endl;
    

    cout << "Resizing array to LISTSIZE+5" << endl;
    if(mylist.resizeArray(LISTSIZE+5)){
        cout << "Resized..." << endl;
        mylist.printArray();
    } else{
        cout << "Failed to resize" << endl;
    }
    cout << "The current length of the array is " << mylist.getLength() << endl;
    if(mylist.getSorted()){
        cout << "List is currently sorted" << endl;
    } else{
        cout << "List is unsorted" << endl;
        cout << "Sorting array" << endl;
        mylist.sort();
        mylist.printArray();
    }
    cout << endl;
     

    cout << "Resizing array to LISTSIZE-5" << endl;
    if(mylist.resizeArray(LISTSIZE-5)){
        cout << "Resized..." << endl;
        mylist.printArray();
    } else{
        cout << "Failed to resize" << endl;
    }
    cout << "The current length of the array is " << mylist.getLength() << endl;
    if(mylist.getSorted()){
        cout << "List is currently sorted" << endl;
    } else{
        cout << "List is unsorted" << endl;
        cout << "Sorting array" << endl;
        mylist.sort();
        mylist.printArray();
    }
    cout << endl;
     

    cout << "Resizing array to 0" << endl;
    if(mylist.resizeArray(0)){
        cout << "Resized..." << endl;
        mylist.printArray();
    } else{
        cout << "Failed to resize" << endl;
    }
    cout << "The current length of the array is " << mylist.getLength() << endl;
    if(mylist.getSorted()){
        cout << "List is currently sorted" << endl;
    } else{
        cout << "List is unsorted" << endl;
        cout << "Sorting array" << endl;
        mylist.sort();
        mylist.printArray();
    }
    cout << endl; 
    
    cout << "Attempting to set to random numbers between 1 to 100" << endl;
    mylist.setRandom(1,100);
    mylist.printArray();
    if(mylist.getSorted()){
        cout << "List is currently sorted" << endl;
        cout << "The length of the list is " << mylist.getLength() << endl;
    } else{
        cout << "List is unsorted" << endl;
        cout << "The length of the list is " << mylist.getLength() << endl;
    }
    cout << endl;

    cout << "Attempting to set third element to 50" << endl; 
    if(mylist.setElement(50, 2)){
        cout << "Element Set" << endl;
    } else {
        cout << "Element NOT Set" << endl;
    }
    mylist.printArray();
    if(mylist.getSorted()){
        cout << "List is currently sorted" << endl;
    } else{
        cout << "List is unsorted" << endl;
    }
    cout << endl;

    cout << "Searching for an element of 50 of an unsorted array" << endl;
    int request = mylist.findElement(50);
    if(request >= 0){
        cout << "Element 50 was found at index " << request << endl;
    } else{
        cout << "Element 50 was not found in the list" << endl; 
    }
    cout << endl;

    cout << "Setting fourth element to 50 as well" << endl;
    if(mylist.setElement(50, 3)){
        cout << "Element Set" << endl;
    } else {
        cout << "Element NOT Set" << endl;
    }
    mylist.printArray();
    cout << endl;
        
    cout << "Searching for an element of 50 of an unsorted array" << endl;
    request = mylist.findElement(50);
    if(request >= 0){
        cout << "Element 50 was found at index " << request << endl;
    } else{
        cout << "Element 50 was not found in the list" << endl; 
    }
    cout << endl;


    cout << "Setting third element to 100" << endl;
    if(mylist.setElement(100, 2)){
        cout << "Element Set" << endl;
    } else {
        cout << "Element NOT Set" << endl;
    }
    mylist.printArray();
    if(mylist.getSorted()){
        cout << "List is currently sorted" << endl;
    } else{
        cout << "List is unsorted" << endl;
    }
    cout << endl;

    cout << "Searching for an element of 50 of an unsorted array" << endl;
    request = mylist.findElement(50);
    if(request >= 0){
        cout << "Element 50 was found at index " << request << endl;
    } else{
        cout << "Element 50 was not found in the list" << endl; 
    }
    cout << endl;

    return 0;
}

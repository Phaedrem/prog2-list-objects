/*
 * replace with your comment header
 */

#include "main.h"

int main(int argc, char** argv) {
    /***********************************
     * DO NOT MODIFY THIS FILE OTHER THAN
     * TO ADD YOUR COMMENT HEADER AND
     * UNCOMMENT THINGS AS YOU COMPLETE
     * THE FUNCTIONALITY OF YOUR LIST OBJECT
     ***********************************/

    /* This will create a "list" of size LISTSIZE
     * and initialize it to all zeros */
    cout << "create and initialize mylist" << endl;
    MyList mylist(LISTSIZE);
    //mylist.printArray();
    cout << endl;

    /* This will set the list to all 50 */
    cout << "set mylist to all 50" << endl;
    //mylist.setArray(50);
    //mylist.printArray();
    cout << endl;

    /* This will fail and set the array to the
     * default random 1-10 values */
    cout << "attempt to set to random numbers -2 to 4" << endl;
    //mylist.setRandom(-2,4);
    //mylist.printArray();
    cout << endl;

    /* This will fail and set the array to the
     * default random 1-10 values */
    cout << "attempt to set to random numbers 4 to 4" << endl;
    //mylist.setRandom(4,4);
    //mylist.printArray();
    cout << endl;

    /* This will succeed and set the array to the
     * random 1-100 values */
    cout << "attempt to set to random numbers 1 to 100" << endl;
    //mylist.setRandom(1,100);
    //mylist.printArray();
    cout << endl;

    /* This will succeed and set the array to the
     * random 500-1000 values */
    cout << "attempt to set to random numbers 500 to 1000" << endl;
    //mylist.setRandom(1000,500);
    //mylist.printArray();
    cout << endl;

    /* These next two sets will succeed and set the 1st and last
     * elements to 1000 and 2000 respectively */
    //if(mylist.setElement(1000, 0)){
    //    cout << "Element Set" << endl;
    //} else {
    //    cout << "Element NOT Set" << endl;
    //}
    //if(mylist.setElement(2000, LISTSIZE-1)){
    //    cout << "Element Set" << endl;
    //} else {
    //    cout << "Element NOT Set" << endl;
    //}
    //mylist.printArray();
    cout << endl;

    /* These next two sets will fail and leave the array unmodified */
    //if(mylist.setElement(9999, -1)){
    //    cout << "Element Set" << endl;
    //} else {
    //    cout << "Element NOT Set" << endl;
    //}
    //if(mylist.setElement(9999, LISTSIZE)){
    //    cout << "Element Set" << endl;
    //} else {
    //    cout << "Element NOT Set" << endl;
    //}
    //mylist.printArray();
    cout << endl;

    /* print out the array using getElement() */
    cout << "printing the array element by element" << endl;
    //for(int i=0; i<LISTSIZE; i++){
    //    cout << mylist.getElement(i) << endl;
    //}
    cout << endl;

    /* this will fail and return 0 */
    cout << "attempting to get element 4000" << endl;
    //cout << mylist.getElement(4000) << endl;
    cout << endl;
    
    return 0;
}

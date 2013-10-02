#include "testApp.h"

//--------------------------------------------------------------
void testApp::setup(){

    // A pointer is a variable that stores an ADDRESS in memory, rather than the value which is stored at the address.
    
    // Let's declare a pointer that can point to a string:
    string* myStringPtr;
    
    // Because we haven't defined what myStringPtr should point to, it defaults to some address chosen by the machine:
    cout << "myStringPtr: " << myStringPtr << endl;
    
    // Now let's declare and define an actual string variable with value "Hi!"
    string myString = "Hi!";
    
    // If we output the value stored in myString, we get what we'd expect:
    cout << "myString: " << myString << endl;
    
    // Using the reference operator &, we can get the address of myString
    cout << "&myString: " << &myString << endl;
    // In this case, it's helpful to think of the & operator as the "address of" operator
    
    // We can assign the address of myString to myStringPtr, since the pointer stores addresses of strings!
    myStringPtr = &myString;
    cout << "myStringPtr: " << myStringPtr << endl;
    
    // With any pointer, we can use the dereference operator * to get the actual value stored at the address held in the pointer.
    cout << "*myStringPtr: " << *myStringPtr << endl;
    
    // Now, if we change the value of myString, the change is reflected in the pointer too, because it's looking at the exact same
    // place in memory!
    myString = "20";
    cout << "myString: " << myString << endl;
    cout << "*myStringPtr: " << *myStringPtr << endl;
    
    // With regular old variables, we use dot syntax (.) to call methods on the object stored in the variable.
    cout << "myString.length(): " << myString.length() << endl;
    
    // With pointers, we need to use arrow syntax (->) to call methods on the object stored in the variable.
    // The arrow syntax is kind of like a shortcut that dereferences (i.e. get's the actual value) and then calls the method.
    cout << "myStringPtr->length(): " << myStringPtr->length() << endl;
    
    // This method shows passing by value Ñ myString is copied into the function, so it isn't changed.
    changeStringByValue(myString);
    cout << "changeStringByValue(myString)" << endl;
    cout << "myString: " << myString << endl;
    
    // This one passes myString by reference - myString is indeed changed!
    changeStringByReference(myString);
    cout << "changeStringByReference(myString)" << endl;
    cout << "myString: " << myString << endl;
    
    // Finally, this method expects an address (i.e. it's argument is a pointer).  So we need to use the "address of" operator.
    // Because we're passing in the address, this method too WILL change the myString.
    changeStringByPointer(&myString);
    cout << "changeStringByPointer(&myString)" << endl;
    cout << "myString: " << myString << endl;
    
}

//--------------------------------------------------------------
void testApp::update(){

}

/**
 *
 * This method has an argument that is a reference.  It expects you to pass in a regular variable, but it will use the SAME object
 * you passed in, stored at the SAME location in memory, rather than creating a copy.
 *
 */
void testApp::changeStringByValue(string str) {
    str = "CHANGED";
}

/**
 *
 * This method has an argument that is a reference.  It expects you to pass in a regular variable, but it will use the SAME object
 * you passed in, stored at the SAME location in memory, rather than creating a copy.
 *
 */
void testApp::changeStringByReference(string &strRef) {
    strRef = "Reference CHANGED";
}

/**
 *
 * This method has an argument that is a pointer.  It expects you to pass in a pointer Ñ i.e. an address.  It also doesn't create a
 * copy, but you must use treat the argument as a pointer within the method, using arrow syntax and all that jazz.
 *
 */
void testApp::changeStringByPointer(string *strRef) {
    // notice the dereference operator *, which lets us access the value stored at the address held in the pointer
    *strRef = "Pointer CHANGED";
}

//--------------------------------------------------------------
void testApp::draw(){

}

//--------------------------------------------------------------
void testApp::keyPressed(int key){

}

//--------------------------------------------------------------
void testApp::keyReleased(int key){

}

//--------------------------------------------------------------
void testApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void testApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void testApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void testApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void testApp::dragEvent(ofDragInfo dragInfo){ 

}

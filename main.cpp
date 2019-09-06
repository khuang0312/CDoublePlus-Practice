//This is my way of following along with my teacher's notes...


/* 
int main() {
  return 0; //0 is an exit code commonly used to indicate success!
}
*/

/*
signature -> first line of function: return type, name, parameters
  {
    body
  }
  
you can write code disregarding spacing, but this is nasty AF
int main() { return 0; }
*/

/*
#include <iostream> //this is our equivalent of importing a library in Python
//any line beginning with # is called a processor directive...
// < > - indicating code that doesn't belong to ours
//iostream allows us to manipulate input and output 

int main() {
  std::cout <<"This prints a line and a newline." << std::endl << "And then another line...";
  //std is the "standard" namespace - this generally contains stuff in the C++ Standard library
  // << - "put operator" - this puts the string literal into the standard output stream
    // put operators can be chainged
  //std::endl is better than '\n' because '\n' isn't standard...
    //formally know as the platform-independent end-of-line sequence

  return 0;
}
*/


#include <iostream>

int main() {
  std::cout << "Line 1" << std::endl << "Line 2" << std::endl << "Last Line";
  return 0;
}

/*
Some questions to get started:
1. How does one write a function in C++?
2. Do you need proper spacing for your code?
3. What is the processor directive for importing a library?
4. What is the library for manipulation of input and output?
5. Explain the put operator. How do you type the put operator?
6. What does "std" mean? 
7. Why should we use std::endl over '\n' if they seem to do the same thing?
*/

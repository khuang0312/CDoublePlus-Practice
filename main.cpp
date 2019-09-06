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

/*
char, short, int, long, long long, 
8, 16, 32, and 64 bits respectively... yes, long and long long are both 64-bit...

unsigned integral types (e.g unsigned int) -> no negatives, only whole number values

bool -> True, False; non-zero integral values are True, 0 is False

float, double
32, 64 bits respectively
*/


/*
expressions evaluate to values; therefore, they have a type
statements perform a job, but do not hold a value; therefore, they don't have a type
  their primary goal is to have a side effect that does something

expressions
a + b;
a = 6;

block, compound statement, block statement - statements surrounded by curly braces
control structures - statements affecting the control flow

if - else if - else (based on conditional expression)

if (a > 5 && b > 2) {
  std::cout << "First if block executed" << std::endl;
}

switch (based on controlling expression)

switch(a) {
  case 0:
    std::cout << "Zero" << std::endl;
    break;

  case 1:
    std::cout << "One" << std::endl;
    break;

  case default: //chosen when no other case matches
    std::cout << "Other" << std::endl;
    break;
}

code only stops when it hits the end of a switch statement or a "break"
  basically, if a was 1 and there were no "breaks", case 1 and case default would be executed

while - evaluates condition before
do-while - evaluates condition after--at least one iteration
for - initialization, conditional, iteration--conditional evaluated before
      simplification of a while loop

#include <iostream>

int main() {
  int a = 3;      // this is a variable declaration; more about this below
  while (a == 5) {
    std::cout << a << std::endl;
    a++;        // adds 1 to a; more details later
  }

  a = 3;
  do {
    std::cout << a << std::endl;
    a++;
  }
  
  while (a == 5);


  for (a = 3; a < 10; a++) {
    std::cout << a << std::endl;
  }

  return 0;
}
*/


/*
declarations declares something exists and contains only one type
  you can initialize a value at the same time...

function declarations
int square(int n);

definitions give declarations meaning

declarations must precede definitions

this could happen because square is declared and defined later on...

#include <iostream>

int square(int n);

int main()
{
    std::cout << square(4) << std::endl;
    return 0;
}

int square(int n)
{
    return n * n;
}
*/


/*
assignment

originally...
lvalue - expressions legal on the left-hand side
rvalue - expressions only legal on the right-hand side

lvalues - values living beyond the expression originally evaluated in
  (represents a location in memory, not just variable name)
rvalues - dies after the expression is evaluated
*/

/*
if a function must return a value...
  make sure every way does reach a return statement

void - indicates function doesn't return a value
  you can use a return statement within a void function to end it prematurely...
*/

/*
1. What are the different integral types?
2. What are the different floating point types?
3. What is the difference between an expression and statement?
4. What is C++'s version of if-else? Is it if-elif-else or if-else if-else?
5. What is a do-while loop? How does it differ from a while loop?
6. What are the components of a for loop?
7. What is a switch statement?
8. What is a function declaration?
9. What is an lvalue and rvalue? Why is this important?
10. Assuming the function definition is dead last, 
  can you write a function declaration and call the function?
11. How do we indicate that a function doesn't return a value?
12. How do we prematurely end a function returning void?
*/
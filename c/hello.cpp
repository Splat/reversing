#include <iostream>
//Note that there is a different input/output library iostream
//Also a slightly different notation for including <libraryname> instead of "libraryname.h"

// import the standard library for strings
using namespace std;

// writing a basic compare function
int compare(int a, int b) {
  return a == b;
}

int square(int a) {
  return a*a;
}

//Again there is a "main" function with a return type "int"
int main() {
  //Now printf is replaced by a "stream" concept, where "cout" is the output stream 
  //and we pipe values into that output stream by the "<<" operator.
  //Also the "\n" has a more abstract version "endl" for a platform independent newline character
  string text = "Ryan is here.";
  std::cout << text << std::endl;

  //print the length of text.
  cout << "The length of the text string is: " << text.length() << "\n"; 

  //print the first 4 of the string text
  string first_four = text.substr(0, 4);
  cout << first_four << "\n";

  // playing with comparisons. equal is zero
  if (first_four.compare("Ryan") == 0){
    cout << "They are the same" << endl;
  } else {
    cout << "They are NOT the same" << endl;
  }
  
  //loops
  int i;
  //The first part of this for loop is run once as an initialization
  //the second part is checked for truth at the end of each execution to determine if the loop should be run again
  //the third part is executed at the end of the loop (typically used to increment something)
  for (i = 0; i < 5; i++){
    printf("i = %d\n", i);
  }

  for (int i=0; i<5; printf("i = %d\n", i++)){}

  for(i=0; !compare(i, 5); i++){
    printf("i^2 = %d\n", square(i));
  }

  return 0;
  //Finally you'll note that there is a "std::" namespace in front of the cout and endl keywords.
  //We can do away with that by having a "using namespace std;" line higher in the code
  //Or even a "using std::cout;" and "using std::endl;" lines higher in the code.
  //In those cases just 'cout << "hello" << endl;' would work
}

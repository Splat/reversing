#include "stdio.h" 
#include "string.h"
//This #include line allows input/output (printf)
//Lines that start with # are handled by the preprocessor
//Lines that start with '//' are comments

/*  You can 
also have multi-line 
comments using '/*' and it's partner */

//There is always a "main" function which is what gets executed
// When declaring a function there is the basic format:
// RETURN TYPE function_name(INPUT_TYPE) 
// the braces {} surround the commands of the function
// int is a basic integer and 'void' is a way of saying no input
int main(void) {
  //'printf' is a formatted print function that is included in 'stdio'
  //The '\n' character is a newline character
  printf("Hello World\n");
  printf("Hello Galaxy\n");
  //all instructions are terminated with a semi-color ';'

  char text[128] = "Ryan is here.";
  //Old fashioned C strings
  //char is a one byte integer type used to store an ASCII character
  // char text[128] declares an array of 'char's and = "..." initializes the values stored in that array
  // after the "." in "here" there will be stored a null byte (00000000) to indicate the end of the character array

  printf("%s\n", text);
  //The format flag %s will print out the entire character array as text
  //this is the old fashioned version of a "string"
  
  // using the %zu format specifier to print size_t
  printf("Length of string {text} = %zu \n",strlen(text));
  
  //return 0 is to satisfy the return type int, 0 is the standard
  // value for "success" and it let's the operating system know
  // everything came out just fine.
  return 0;
}

/*1. Char Strings:
Char strings in C++ are arrays of characters, terminated by a null character (\0).

A char string is represented by an array of type char. For example: */
char str[] = "Hello";
// The above line creates a char string str with a size of 6 (5 characters + 1 null character).


/*2. Initialization:

You can initialize a char string directly with a string literal:
       char str[] = "World";

Or, you can initialize it character by character:
       char str[] = {'H', 'e', 'l', 'l', 'o', '\0'};

*/  


/*3.Key Differences:
     A char string is a specific use case of an array where the elements are characters
      and the array is terminated by a null character.

     Arrays can hold any data type, while char strings are specifically for character data
      and represent textual information.
      */
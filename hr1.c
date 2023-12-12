/* Rushils Macbookpro P1 */
// HR1 program 1 : To print a random text and hello world without using printf and puts in the program


#include <stdio.h>
int main()
{
    static const char hello[] = "Hello, World!\n"; 
    fwrite(hello, sizeof(hello) - 1, 1, stdout); 
    printf("Welcome to C programming.");
    return 0;
}

// end of the program
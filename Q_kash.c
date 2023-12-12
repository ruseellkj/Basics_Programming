/*Q : To write a function that takes a string as input and returns true if the string contains only one character repeated again and again otherwise the function should return false

Test case:
Input : "aaaa"
Output : True

Input : "aba"
Output : False */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>

// Defining function
char str()
{
    int n = s.length();
    for (int i = 1; i < n; i++)
        if (s[i] != s[0])
            return false;

    return true;
}

int main()
{
    char s[100];
    printf("Enter the string\n");
    scanf("%s", s);
    if (str())
        printf("True\n");
    else
        printf("False");

    return 0;
}
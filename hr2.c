/* Rushils Macbookpro P2 
HR Program 2 : Playing with characters */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <math.h>


// int main()
// {
//     char ch, s[100], sen[100];
//     scanf("%c", &ch);
//     scanf("%s", s);
//     scanf("\n");
//     scanf("%[^\n]%*c", sen);
//     printf("%c\n", ch);
//     printf("%s\n", s);
//     printf("%s", sen);

//     return 0;

// }

// end of the program

int main()
{
    char ch,s[100],sen[100];
    scanf("%c",&ch);
    scanf("%s",s);
    scanf("\n");
    scanf("%[^\n]%*c",sen);
    printf("%c\n",ch);
    printf("%s\n",s);
    printf("%s",sen);
    return 0;

}
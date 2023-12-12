#include <stdio.h>
int main()
{
    int subj;
    printf("Which subjects which you have passed in your exam?\n");
    printf("Enter 1 for Maths, Enter 2 for Science or Enter 3 for both\n");
    scanf("%d", &subj);

    if(subj==1)
    {
        printf("Congratulation! for clearing Maths , you have won Rs 15");
    
    }

    else if(subj==2)
    {
        printf("Congratulation! for clearing Science , you have won Rs 15");
    }

    else if(subj==3)
    {
        printf("Congratulation! for clearing Both the exams, you have won Rs 45");
    
    }

    else
    {
        printf("Please select a correct subject number to get your gift");
    }

    return 0;

}
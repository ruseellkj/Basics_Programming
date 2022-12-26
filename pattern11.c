#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main()
{
    for (int i = 0; i < 7; i++)
    {
        int n = 4;
        if (i > 3)
        {
            int start = 6 - i, end = i;
        }
        else
        {
            int start = i, end = 6 - i;
        }

        for (int j = 0; j < 7; j++)
        {
            if (j >= start && j <= end)
            {
                printf(n);
            }

            else if (i != j && i < end)
            {
                printf(n--);
            }

            else
            {
                printf(++n);
            }
        }
    }
}
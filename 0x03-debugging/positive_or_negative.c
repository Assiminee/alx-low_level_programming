#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * positive_or_negative - checks if int is positive or negative
 *
 * @i: int it be checked
 */
void positive_or_negative(int i)
{
        if (i == 0)
        {
                printf("%d is zero\n", i);
        }
        else if (i > 0)
        {
                printf("%d is positive\n", i);
        }
        else
        {
                printf("%d is negative\n", i);
        }
}

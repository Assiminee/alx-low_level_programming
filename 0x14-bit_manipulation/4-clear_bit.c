#include "main.h"
/**
 * clear_bit - sets bit at a given index to 0
 * @n: pointer to number to be changed
 * @index: index of bit to be set to 0
 *
 * Return: 1 if it worked, -1 if it failed
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
        unsigned long int bit = 1UL << (index + 1);

        if (n == NULL)
                return (-1);
        *n = *n & bit;
        return (1);
}

#include "dog.h"
#include <stdio.h>
/**
 * print_dog - print a structure.
 * @d: pointer containing the structure.
 */
void print_dog(struct dog *d)
{
	printf("Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner);
}	

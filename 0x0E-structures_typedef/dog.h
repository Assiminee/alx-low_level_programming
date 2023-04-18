#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - structure of dog
 * @name: name of dog 
 * @age: age of dog
 * @owner: owner of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * init_dog - initialize a variable of type struct dog
 * @d: pointer to struct dog
 * @name: pointer to char
 * @age: float
 * @owner: pointer to char
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif

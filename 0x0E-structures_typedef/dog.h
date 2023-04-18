#ifndef _DOG_H_
#define _DOG_H_
/**
 * struct dog - this descripction about which dog
 * @name: sdfasdf
 * @age:  asdfas
 * @owner:  asdf
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif

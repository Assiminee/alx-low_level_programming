#ifndef MAIN_H_INCLUDED
#define MAIN_H_INCLUDED
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of array
 * @c: char to initialize array with
 *
 * Return: pointer to the first element of the array
 */
char *create_array(unsigned int size, char c);
/**
 * _strdub - returns a pointer to a new string
 * which is a duplicate of the string s
 * @str: string to duplicate
 *
 * Return: pointer to the duplicated string
 */
char *_strdup(char *str);
#endif

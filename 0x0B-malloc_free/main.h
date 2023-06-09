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
/**
 * str_concat - concatenates two strings
 * @s1: string
 * @s2: string
 * 
 * Return: pointer to char
 */
char *str_concat(char *s1, char *s2);
/**
 * alloc_grid - function that returns a pointer
 * to a 2 dimensional array of integers
 * @width: number of columns
 * @heigth: number of rows
 *
 * Return: pointer to pointer
 */
int **alloc_grid(int width, int height);
/**
 * free_grid - frees a 2 dimensional grid
 * @grid: grid to free
 * @height: rows of 2 dimentional grid
 *
 * Return: void
 */
void free_grid(int **grid, int height);
/**
 * argstostr - concatenates all the arguments of the program
 * @ac: number of arguments in the command line
 * @av: vector of arguments
 *
 * Return: pointer to a new string, or NULL if it fails
 */
char *argstostr(int ac, char **av);
#endif

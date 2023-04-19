#ifndef CALC_H
#define CALC_H
/**
 * struct op - Struct op
 *
 * @op: The operator
 * @f: The function associated
 */
typedef struct op
{
    char *op;
    int (*f)(int a, int b);
} op_t;
/**
 * op_add - does the sum of two integers
 * @a: int
 * @b: int
 *
 * Return: sum of a and b
 */
int op_add(int a, int b);
/**
 * op_sub - performs the substractin of two integers
 * @a: int
 * @b: int
 *
 * Return: substraction of a and b
 */
int op_sub(int a, int b);
/**
 * op_mul - multiplies two integers
 * @a: int
 * @b: int
 *
 * Return: multiplication of a by b
 */
int op_mul(int a, int b);
/**
 * op_div - performs the division of two integers
 * @a: int
 * @b: int
 *
 * Return: division of a by b
 */
int op_div(int a, int b);
/**
 * op_mod - modulo of two integers
 * @a: int
 * @b: int
 *
 * Return: modulo of a by b
 */
int op_mod(int a, int b);
/**
 * get_op_func - selects the correct function 
 * to perform the operation asked by the user
 * @s: operator
 *
 * Return: pointer to function
 */
int (*get_op_func(char *s))(int, int);
#endif

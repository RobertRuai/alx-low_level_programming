#include "3-calc.h"

/**
 * op_add - adds a and b
 * @a: first integer
 * @b: second integer
 *
 * Return: 0 success
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - suubtracts b from a
 * @a: first integer
 * @b: second integer
 *
 * Return: 0 success
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply a and b
 * @a: first integer
 * @b: second integer
 *
 * Return: 0 success
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides a and b
 * @a: first integer
 * @b: second integer
 *
 * Return: 0 success
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - calculates the remainder of the division of a and b
 * @a: first integer
 * @b: second integer
 *
 * Return: o suceess
 */
int op_mod(int a, int b)
{
	return (a % b);
}

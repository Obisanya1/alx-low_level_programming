#include "3-calc.h"

/**
 * op_add - adds two numbers
 * @a: first input
 * @b: second input
 * Return: returns added result.
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - subtracts two numbers
 * @a: first input
 * @b: second input
 * Return: returns different result
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers
 * @a: first input
 * @b: second input
 * Return: returns multiplication result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides two numbers
 * @a: first input
 * @b: second input
 * Return: returs division result
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a / b);
}

/**
 * op_mod - calculates the module of two numbers
 * @a: first input
 * @b: second input
 * Return: returns remainder of the division
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (a % b);
}

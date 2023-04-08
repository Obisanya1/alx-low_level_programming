#include <stdio.h>
#include "main.h"

/**
 * main- entry point - it prints the name of the file
 * follow by new line
 * @argc: number of command line arguments
 * @argv: array that contains the prgogtam command line arguments
 * Return: (0) if successful
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}

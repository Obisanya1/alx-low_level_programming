#include <stdio.h>
#include "main.h"

/**
 * main - This is the ebtry point. - a program tha prints the number
 * of arguments passed into it
 * @argc: number of command line arguments
 * @argv: array that contains the program command line arguments
 * Return: (0) if successful
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}

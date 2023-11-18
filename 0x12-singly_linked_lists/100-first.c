#include <stdio.h>

/**
 * starter - is executed before main function
 *
 * Return: no value
 */

void __attribute__ ((constructor)) starter()
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

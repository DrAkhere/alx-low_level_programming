#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * a - Entry point to print void first before main.c
 */
void a(void) __attribute__ ((constructor));
void a(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

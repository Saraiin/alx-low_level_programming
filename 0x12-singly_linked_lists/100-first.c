#include <stdio.h>
void theHare(void)__attribute__((constructor));
/**
 * theHare - prints You're beat! and yet, you must allow,
 * I bore my house upon my back!
 */
void theHare(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

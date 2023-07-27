#include <stdio.h>
/**
 * premain - prints some string before main function
 */
void premain(void) __attribute__((constructor));

void premain(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}

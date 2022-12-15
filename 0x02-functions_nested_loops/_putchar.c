#include "main.h"
#include "unistd.h"
/**
 * Description: _putchar to print characters
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

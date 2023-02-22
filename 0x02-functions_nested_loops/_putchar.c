#include "main.h"
#include <unistd.h>
/**
 * _putchar - the charater c to stdout
 * @c: the charater the priest
 * Return: on success  1.
 * On error, -1 is returened, and errno is set appropriately.
 */
int  _puchar(char c)
{ 
	return (write(1,&c, 1));

}

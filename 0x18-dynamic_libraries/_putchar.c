<<<<<<< HEAD
#include <unistd.h>
=======
#include <unistd>
>>>>>>> 7542fa34f3f4c4a5776eb6eef0ab7058dbf98e49

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
<<<<<<< HEAD
 * Return: On success 1, on error -1
=======
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
>>>>>>> 7542fa34f3f4c4a5776eb6eef0ab7058dbf98e49
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

#include "variadic_functions.h"
#include <stdarg.h>
/**
 *sum_them_all- returns the sum of parameters given to function
 *@n: number of arguments
 *
 *Return: sum of the parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int sum = 0;
	unsigned int i = 0;

	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
		if (n == 0)
		{
			return (0);
		}
		va_end(args);
	}
	return (sum);
}

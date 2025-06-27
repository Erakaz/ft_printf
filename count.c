#include "libftprintf.h"

unsigned int	count(long long int n)
{
	unsigned int	count;

	count = 0;
	if (n < 0)
	{
		count += 1;
		n = -n;
	}
	while (n >= 10)
	{
		n = n / 10;
		count++;
	}
	count++;
	return (count);
}
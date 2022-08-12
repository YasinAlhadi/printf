#include "main.h"
/**
 * to_bin - convert to binary
 * @bin: list
 *
 * Return:binary number
 */
int to_bin(va_list bin)
{
	int count, i;
	int *ar;
	unsigned int n, tmp;

	count = 0;
	n = va_arg(bin, unsigned int);
	tmp = n;
	while (n / 2 != 0)
	{
		n /= 2;
		count++;
	}
	count++;
	ar = malloc(count * sizeof(int));
	if (ar == NULL)
	{
		free(ar);
		return (0);
	}
	for (i = 0; i < count; i++)
	{
		ar[i] = tmp % 2;
		tmp /= 2;
	}
	for (i = count - 1; i >= 0; i--)
	{
		_putchar(ar[i] + '0');
	}
	free(ar);
	return (count);
}

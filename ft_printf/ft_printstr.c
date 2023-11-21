#include "libftprintf.h"

int ft_printstr(va_list args)
{
	char *str;
	str = va_arg(args, char *);
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	return (0);
}

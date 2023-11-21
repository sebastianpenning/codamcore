// include codam header

#include "libftprintf.h"

int ft_printchar(va_list args)
{
	int c;
	c = va_arg(args, int);
	c = (char)c;
	write(1, &c, 1);
	return (0);
}
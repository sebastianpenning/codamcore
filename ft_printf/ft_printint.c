#include "libftprintf.h"

int ft_printint(va_list args)
{
	int dec;
	dec = va_arg(args, int);
	ft_putnbr_fd(dec, 1);
	return (0);
}


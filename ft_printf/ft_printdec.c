#include "libftprintf.h"

int ft_printdec(va_list args)
{
	int dec;
	dec = va_arg(args, int);
	ft_putnbr_fd(dec, 1);
	return (0);
}


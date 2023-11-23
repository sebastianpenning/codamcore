#include "libftprintf.h"

int ft_printint(va_list args)
{
	int arg;
	arg = va_arg(args, int);
	ft_putnbr_fd(arg, 1);
	return (0);
}

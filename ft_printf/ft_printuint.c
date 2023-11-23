#include "libftprintf.h"

int ft_printuint(va_list args)
{
	int rtr_va_arg;
	unsigned int arg;

	rtr_va_arg = va_arg(args, int);
	arg = rtr_va_arg;
	ft_putnbr_fd(arg, 1);
	return (0);
}

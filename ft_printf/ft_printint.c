#include "ft_printf.h"

int ft_printint(va_list args)
{
	int arg;
	int rtr;

	arg = va_arg(args, int);
	rtr = 0;
	rtr = ft_putnbr_fd(arg, 1);
	return (rtr);
}

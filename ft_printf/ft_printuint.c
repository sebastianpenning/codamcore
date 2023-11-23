#include "libftprintf.h"


static void printunit (unsigned int arg)
{
	if (arg == 0)
		ft_putchar_fd('0', 1);
	if(arg > 0)
	{
		if(arg > 9)
			printunit(arg / 10);
		ft_putchar_fd(48 + (arg % 10), 1);
	}
}

int ft_printuint(va_list args)
{
	int rtr_va_arg;
	unsigned int arg;

	rtr_va_arg = va_arg(args, int);
	arg = (unsigned int)rtr_va_arg;

	printunit(arg);
	return (0);
	
}

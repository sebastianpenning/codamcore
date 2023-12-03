#include "ft_printf.h"
#include "stdio.h"

int	ft_printptr(va_list args)
{
	int index;
	int rtr;
	long unsigned arg;
	char * hex;

	arg = va_arg(args, long unsigned int);
	if(arg == 0)
	{
		rtr = ft_putstr_fd("(nil)", 1);
		return (rtr);
	}
	hex = ft_hexconvertptr(arg);
	index = ft_strlen(hex) - 1;
	rtr = 0;
	rtr += ft_putchar_fd('0', 1);
	rtr += ft_putchar_fd('x', 1);
	while (index >= 0)
	{
		rtr += ft_putchar_fd(ft_tolower(hex[index]), 1);
		index--;
	}
	free(hex);
	return(rtr);
}


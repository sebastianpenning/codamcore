#include "ft_printf.h"
#include "stdio.h"

int	ft_printhexupp(va_list args)
{
	int rtr;
	long unsigned int arg;
	int index;
	char * hex;
	
	rtr = 0;
	arg = va_arg(args, long unsigned int);
	hex = ft_hexconvert(arg);
	index = ft_strlen(hex) -1; 
	while (index >= 0)
	{
		rtr += ft_putchar_fd(ft_toupper(hex[index]), 1);
		index--;
	}
	free(hex);	
	return (rtr);
}


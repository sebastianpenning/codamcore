#include "ft_printf.h"

int	ft_printhexlow(va_list args)
{
	int rtr;
	unsigned int arg;
	int index;
	char * hex;
	
	rtr = 0;
	arg = va_arg(args, unsigned int);
	hex = ft_hexconvert(arg);
	index = ft_strlen(hex) -1;
	while (index >= 0)
	{
		rtr += ft_putchar_fd(ft_tolower(hex[index]), 1);
		index--;
	}
	free(hex);	
	return (rtr);
}

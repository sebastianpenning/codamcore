#include "ft_printf.h"
#include "stdio.h"

int	ft_printhexupp(va_list args)
{
	long unsigned int arg;
	int index;
	char * hex;
	
	arg = va_arg(args, long unsigned int);
	// printf("arg return value %lu\n", arg);
	hex = ft_hexconvert(arg);
	index = ft_strlen(hex); 
	while (index >= 0)
	{
		ft_putchar_fd(ft_toupper(hex[index]), 1);
		index--;
	}
	free(hex);	
	return (0);
}


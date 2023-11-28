#include "libftprintf.h"
#include <stdio.h>

int	ft_printhexlow(va_list args)
{
	int arg;
	char * hex;
	arg = va_arg(args, int);
	hex = ft_hexconvert(arg);
	printf("hex: %s\n",hex);
	free(hex);	
	return (0);
}

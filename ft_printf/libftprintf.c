#include "libftprintf.h"
#include <stdio.h>

// check [flags] [width] and [. precision]


int check_datatype (const char specifier, va_list args)
{
	if(specifier == 'c')
		ft_printchar(args);
	if(specifier == 's')
		ft_printstr(args);
	if(specifier == 'd')
		ft_printint(args);
	if(specifier == 'i')
		ft_printint(args);
	if(specifier == 'u')
		ft_printuint(args);
	if(specifier == '%')
		ft_printamp();
	if(specifier == 'x')
		ft_printhexlow(args);
	return 0;
}

int ft_printf(const char *format, ...)
{
	va_list args;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			//printf("check if is format string\n");
			// check_flags();
			// check_width();
			// check_precision();
			check_datatype(format[1], args);
			format += 2;
		}
		write(1, format, 1);
		format++;
	}
	va_end(args);
	return(0);
}

int main ()
{
	int test;
	test = 534667;

	ft_printf("hello %x\n", test);
	return (0);
}
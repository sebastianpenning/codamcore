#include "ft_printf.h"
#include "stdio.h"

static int check_datatype (const char specifier, va_list args)
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
	if(specifier == 'X')
		ft_printhexupp(args);
	if(specifier == 'p')
		ft_printptr(args);
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
			check_datatype(format[1], args);
			format += 2;
		}
		else
		{
			write(1, format, 1);
			format++;
		}
	}
	va_end(args);
	return(0);
}

// int main ()
// {
// 	printf("\n");
// 	printf("My printf: \n");
// 	ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% 	%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 
// 				'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42,   'C', "0", 0, 0 ,0 ,0, 42, 0);
// 	printf("\n");
// 	printf("org printf: \n");
// 	   printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
// 	// ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% ", 'A', "42", 42, 42 ,42 , 42, 42);
// 	printf("\n");
// 	// ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42);
// 	// printf("\n-------------------\n");
// 	// printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%%", 'A', "42", 42, 42 ,42 , 42, 42);
// 	// printf("\n");
// 	// printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42);

// }
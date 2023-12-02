#include "ft_printf.h"
#include "stdio.h"

static int check_datatype (const char specifier, va_list args)
{
	int rtr;

	rtr = 0;
	if(specifier == 'c')
		rtr = ft_printchar(args);
	if(specifier == 's')
		rtr = ft_printstr(args);
	if(specifier == 'd')
		rtr = ft_printint(args);
	if(specifier == 'i')
		rtr = ft_printint(args);
	if(specifier == 'u')
		rtr = ft_printuint(args);
	if(specifier == '%')
		rtr = ft_printamp();
	if(specifier == 'x')
		rtr = ft_printhexlow(args);
	if(specifier == 'X')
		rtr = ft_printhexupp(args);
	if(specifier == 'p')
		rtr = ft_printptr(args);
	return (rtr);
}

int ft_printf(const char *format, ...)
{
	int rtr;
	va_list args;

	rtr = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			rtr += check_datatype(format[1], args);
			format += 2;
		}
		else
		{
			rtr += ft_putchar_fd(format[0], 1);
			format++;
		}
	}
	va_end(args);
	return(rtr);
}

// int main ()
// {
// 	int rtr;

// 	rtr = 0;
// 	printf("\n");
// 	printf("My printf: \n");
// 	// rtr = ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% 	%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 
// 	// 			'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42,   'C', "0", 0, 0 ,0 ,0, 42, 0);
// 	rtr = ft_printf("lolol %x\n", 0);
// 	printf("num: %d\n", rtr);

// 	printf("\n");
// 	printf("org printf: \n");
// 	// rtr = printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %c%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42, 'C', "0", 0, 0 ,0 ,0, 42, 0);
// 	rtr = printf("lolol %x\n", 0);
// 	printf("num: %d\n", rtr);
// 	// ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% ", 'A', "42", 42, 42 ,42 , 42, 42);
// 	printf("\n");
// 	// ft_printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42);
// 	// printf("\n-------------------\n");
// 	// printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%%", 'A', "42", 42, 42 ,42 , 42, 42);
// 	// printf("\n");
// 	// printf("%%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%% %%%c%%%s%%%d%%%i%%%u%%%x%%%X%%%%", 'A', "42", 42, 42 ,42 , 42, 42, 'B', "-42", -42, -42 ,-42 ,-42, 42);

// }
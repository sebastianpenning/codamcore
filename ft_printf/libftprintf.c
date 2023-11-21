#include "libftprintf.h"

// check [flags] [width] and [. precision]

// int check_flags (const char flag)
// {
// 	if(flag == '-')
// 		printf("-");
// 	if(flag == '+')
// 		printf("+");
// 	if(flag == ' ')
// 		printf(" ");
// 	if(flag == '#')
// 		printf("#");
// 	if(flag == '0')
// 		printf("0");	
// 	return (0);
// }

// int check_width (const char width)
// {
// 	return (0);
// }

// int check_precision (const char precs)
// {
// 	return (0);
// }

// int ft_printptr(va_list args)
// {
// 	void *ptr;
// 	void ** test;
// 	ptr = va_arg(args, void*);
// 	test = &ptr;
// 	write(1, test, 5);
// 	return (0);
// }

int check_datatype (const char specifier, va_list args)
{
	if(specifier == 'c')
		ft_printchar(args);
	if(specifier == 's')
		ft_printstr(args);
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
	char* test = "world";
	ft_printf("hello %s\n", test);
	return (0);
}
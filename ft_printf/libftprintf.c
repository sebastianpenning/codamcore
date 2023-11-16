#include <stdarg.h>
#include <stdio.h>

// check [flags] [width] and [. precision]

int check_flags (const char flag)
{
	if(flag == '-')
		printf("-");
	if(flag == '+')
		printf("+");
	if(flag == ' ')
		printf(" ");
	if(flag == '#')
		printf("#");
	if(flag == '0')
		printf("0");	
	return (0);
}

int check_width (const char width)
{
	return (0);
}

int check_precision (const char precs)
{
	return (0);
}

int check_format (const char specifier)
{
	if(specifier == 'c')
		printf("c");
	if(specifier == 's')
		printf("s");
	if(specifier == 'p')
		printf("p");
	if(specifier == 'd')
		printf("d");
	if(specifier == 'i')
		printf("i");
	if(specifier == 'u')
		printf("u");
	if(specifier == 'x')
		printf("x");
	if(specifier == 'X')
		printf("X");
	if(specifier == '%')
		printf("%%");
	return (0);
}

int ft_printf(const char * args, ...)
{
	while (*args)
	{
		if (*args == '%')
			printf("check if is format string\n");
			check_flags();
			check_width();
			check_precision();
			check_datatype(args[1]);
		args++;
	}
	return(0);
}

int main ()
{
	ft_printf("aaaa%da");
	return (0);
}
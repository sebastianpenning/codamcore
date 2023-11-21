#include <stdarg.h>
#include <stdio.h>
#include <unistd.h>


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



int ft_printchar(va_list args)
{
	int c;
	c = va_arg(args, int);
	c = (char)c;
	write(1, &c, 1);
	return (0);
}

int ft_printstr(va_list args)
{
	char *str;
	str = va_arg(args, char *);
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	return (0);
}
int ft_printptr(va_list args)
{
	void *ptr;
	void ** test;
	ptr = va_arg(args, void*);
	test = &ptr;
	write(1, test, 5);
	return (0);
}

int check_datatype (const char specifier, va_list args)
{
	if(specifier == 'c')
		ft_printchar(args);
	if(specifier == 's')
		ft_printstr(args);
	if(specifier == 'p')
		ft_printptr(args);
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

int ft_printf(const char * str, ...)
{
	int index;
	va_list args;

	index = 0;
	va_start(args, str);
	while (*str)
	{
		if (*str == '%')
		{
			//printf("check if is format string\n");
			// check_flags();
			// check_width();
			// check_precision();
			check_datatype(str[1], args);
			str += 2;
		}
		write(1, str, 1);
		str++;
	}
	va_end(args);
	return(0);
}

int main ()
{
	char* test = "nice";
	printf("test address %p\n", test);
	int adr = &test;
	printf("%d\n", test);
	printf("%x\n", adr);
	// ft_printf("hello %p", test);
	return (0);
}
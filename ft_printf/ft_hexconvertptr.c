#include "ft_printf.h"
#include "stdio.h"

static char remainderconvert(long unsigned arg)
{
	long unsigned int rem_int;
	char rem_char;

	rem_int = arg % 16;
	if (rem_int > 9)
	{
		rem_char = rem_int + 55;
	}
	else
	{
		rem_char = rem_int + 48;
	}
	return(rem_char);
}




char* ft_hexconvertptr(long unsigned int arg)
{
	long unsigned int quotient;
	int index;
	char remainder;
	char *hexstr;

	hexstr = malloc(sizeof(char)*60);
	if(hexstr == NULL)
		return (NULL);
	index = 0;
	while(arg > 0)
	{
		quotient = arg / 16;
		remainder = remainderconvert(arg);
		hexstr[index] = remainder;
		arg = quotient;
		index++;
	}
	hexstr[index] = '\0';
	return(hexstr);
}



/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_itoa.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/15 17:23:57 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/19 22:02:13 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void putnmbr(char * string, long int numbers, int totalsize)
{
	if (numbers > 0)
	{
		putnmbr(string, numbers / 10, totalsize - 1);
		string[totalsize - 1] = 48 + (numbers % 10);
	}
}

static int size_counter(long int ln)
{
	int size;
	size = 0;

	while (ln > 9)
	{
		ln = ln / 10;
		size++;
	}
	return(size);
}

char* ft_itoa(int n)
{
	long int ln;
	int count_size;
	char * return_str;

	ln = (long int)n;
	count_size = size_counter(ln);
	if (n < 0)
	{
		count_size = count_size + 2;
		return_str = malloc(sizeof(char) * (count_size + 2));
		return_str[0] = '-';
	}
	else
	{
		count_size = count_size + 1;
		return_str = malloc(sizeof(char) * (count_size + 1));
	}
	putnmbr(return_str, ln, count_size); 
	return_str[count_size] = '\0';
	return(return_str);
}

// int main ()
// {
	
// }

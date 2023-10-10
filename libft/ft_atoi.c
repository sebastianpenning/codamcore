/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_atoi.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/10 19:06:39 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/10 19:33:43 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <bsd/string.h>
#include "ft_strlen.c"
#include "ft_strncmp.c"

int ft_atoi(const char *nptr)
{
	int result;
	int index;
	char * c_ptr;
	c_ptr = (char *)nptr;
	result = 0;
	index = 0;

	while (c_ptr[index] != '\0')
	{
		if ((int)c_ptr[index] > 47 && (int)c_ptr[index] < 58)
		{
			result = result * 10 + ((int)c_ptr[index] - 48); 
		}
		index++;
	}
	return(result);
}

int main ()
{
	const char test1[20] = "5";
	const char test2[20] = "120";
	const char test3[20] = "bobo";

	printf("%d\n", atoi(test1));
	printf("%d\n", ft_atoi(test1));
	printf("%d\n", atoi(test2));
	printf("%d\n", ft_atoi(test2));
	printf("%d\n", atoi(test3));
	printf("%d\n", ft_atoi(test3));

	return (0);
}
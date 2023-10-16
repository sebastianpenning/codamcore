/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcmp.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/08 18:35:03 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/16 20:03:46 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */



#include <unistd.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <bsd/string.h>
#include "ft_strlen.c"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t index;
	unsigned char * s1_cptr;
	unsigned char * s2_cptr;
	int returnval;

	index = 0;
	s1_cptr = (unsigned char*)s1;
	s2_cptr = (unsigned char*)s2;
	returnval = 0;
	if (n == 0)
	{
		return(0);
	}
	while (index < n)
	{
		if (*(s1_cptr+ index) != *(s2_cptr +index))
		{
			return(*(s1_cptr+ index) - *(s2_cptr +index));
		}
		index++;
		// printf("%ld\n", index);
		// printf("%d\n", returnval);
	}
	return(returnval);
}

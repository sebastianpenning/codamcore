/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/06 21:30:56 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/16 20:03:54 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include <unistd.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>


void *ft_memcpy(void *dest, const void *src, size_t n)
{
	long unsigned int index;
	index = 0;

	const char *src_cptr;
	char *dest_cptr;

	src_cptr = (char *)src;
	dest_cptr = (char *)dest;

	while (index <= n)
	{
		dest_cptr[index] = src_cptr[index];
		index++;
	}
	return (dest_cptr);
}



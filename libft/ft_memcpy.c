/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memcpy.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/06 21:30:56 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/17 20:21:46 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dest, const void *src, size_t n)
{
	long unsigned int index;
	index = 0;

	const char *src_cptr;
	char *dest_cptr;

	src_cptr = (char *)src;
	dest_cptr = (char *)dest;

	while (index < n)
	{
		dest_cptr[index] = src_cptr[index];
		index++;
	}
	return (dest_cptr);
}



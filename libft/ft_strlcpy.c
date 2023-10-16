/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/06 22:35:47 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/16 20:25:18 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t srclen;
	size_t index;
	const char *src_cptr;
	src_cptr = (const char*)src;
	srclen = ft_strlen(src_cptr);

	index = 0;	
	if (size == 0)
	{
		return(srclen);
	}
	while (index < size -1)
	{
		dst[index] = src[index];
		index ++; 	
	}
	dst[index++] = '\0';

	return(srclen);
}

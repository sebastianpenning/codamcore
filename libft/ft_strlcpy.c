/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcpy.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/06 22:35:47 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/16 20:06:27 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include <unistd.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <bsd/string.h>
#include "ft_strlen.c"


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

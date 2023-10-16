/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memmove.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/06 22:35:47 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/16 20:04:06 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include <unistd.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

void *ft_memmove(void *dest, const void *src, size_t n)
{
	const char *src_cptr;
	char temp[n];
	char *dest_cptr;
	dest_cptr = (char *)dest;
	src_cptr = (char *)src;
	long unsigned int index;
	index = 0;
	while (index <= n)
	{
		temp[index] = src_cptr[index];
		index++;	
	}
	index =0;
	while (index <= n)
	{
		dest_cptr[index] = temp[index];	
		index++;
	}
	return(dest_cptr);
}

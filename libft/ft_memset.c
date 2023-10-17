/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_memset.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/04 14:32:28 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/17 20:15:48 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *s, int c, size_t n)
{
	char *cptr;
	cptr = (char*)s;
	long unsigned int index;
	index = 0;
	while (index < n)
	{
		cptr[index] = (const int)c;
		index++;
	}
	return(cptr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_bzero.c                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/06 20:08:25 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/21 12:21:15 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	long unsigned int	index;
	char				*cptr;

	index = 0;
	cptr = (char *)s;
	while (index < n)
	{
		cptr[index] = '\0';
		index++;
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/10 20:35:22 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/16 20:24:48 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strdup(const char *s)
{
	char *s_cptr;
	size_t s_len;
	void * ns_vptr;
	char * ns_cptr;
	size_t index;

	s_cptr = (char *)s;
	s_len = ft_strlen(s_cptr);

	ns_vptr = malloc(s_len + 1);
	ns_cptr = (char *)ns_vptr;
	index = 0;

	while (index <= s_len)
	{
		ns_cptr[index] = s_cptr[index];
		index++; 
	}
	ns_cptr[index] = '\0';
	return(ns_cptr);
}

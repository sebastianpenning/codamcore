/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/10 21:36:05 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/16 20:05:44 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <bsd/string.h>
#include "ft_strlen.c"
#include "ft_strncmp.c"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	void * s_vptr;
	char * s_cptr;
	char * ns_cptr;
	size_t index;

	s_vptr = malloc(len + 1);
	s_cptr = (char*)s;
	ns_cptr = (char*)s_vptr;
	index = 0;

	while (index < len)
	{
		if (s_cptr[start] == '\0')
		{
			return(NULL);
		}
		ns_cptr[index] = s_cptr[start];
		start++;
		index++;
	}
	ns_cptr[index] = '\0';
	return(ns_cptr);
}

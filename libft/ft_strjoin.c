/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strjoin.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/11 19:03:23 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/16 20:25:06 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2)
{
	char * s1_cptr;
	char * s2_cptr;
	void * ns_vptr;
	char * ns_cptr;

	size_t len_s1;
	size_t len_s2;
	size_t s1_index;
	size_t s2_index;

	s1_cptr = (char*)s1;
	s2_cptr = (char*)s2;
	s1_index = 0;
	s2_index = 0;

	len_s1 = ft_strlen(s1_cptr);
	len_s2 = ft_strlen(s2_cptr);

	ns_vptr = malloc((len_s1 + len_s2) + 1);
	ns_cptr = (char *)ns_vptr;
	while (s1_index < len_s1)
	{
		ns_cptr[s1_index] = s1_cptr[s1_index];
		s1_index++;
	}
	while ((s2_index < len_s2))
	{
		ns_cptr[s1_index] = s2_cptr[s2_index];
		s1_index++;
		s2_index++;
	}
	ns_cptr[s1_index] = '\0';
	if (strlen(ns_cptr) != len_s1 + len_s2)
	{
		return(NULL);
	}
	return(ns_cptr);
}

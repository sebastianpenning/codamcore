/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/11 19:38:41 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/16 20:26:22 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int istrimmable(char const *s1 ,char const *set)
{
	char * set_cptr;
	char * s1_cptr;
	set_cptr = (char*)set;
	s1_cptr = (char*)s1;
	while(set_cptr[0] != '\0' && s1_cptr[0] != '\0')
	{
		if (s1_cptr[0] == set_cptr[0])
		{
			return(1);
		}
		set_cptr++;
	}
	return(0);
}

char * ft_strtrim(char const *s1, char const *set)
{
	size_t remainder;
	char * s1_cptr;
	char * s_return;
	s1_cptr = (char*)s1;

	while(istrimmable(s1_cptr, set))
	{
		s1_cptr++;
	}
	remainder = ft_strlen(s1_cptr);
	while(istrimmable((s1_cptr + remainder) - 1, set) && remainder > 0)
	{
		remainder--;
	}
	s_return = (char*)malloc(remainder) + 1;
	ft_strlcpy(s_return, (const char*)s1_cptr, remainder + 1);
	return(s_return);
}


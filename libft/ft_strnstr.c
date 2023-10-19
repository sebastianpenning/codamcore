/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strnstr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/09 18:54:25 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/19 16:49:09 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char * ft_strnstr(const char *big, const char *little, size_t len)
{
	char * l_cptr;
	char * b_cptr;
	size_t little_len;
	size_t index;

	l_cptr = (char *)little;
	b_cptr = (char *)big;
	little_len = ft_strlen(l_cptr);
	index = 0;

	if (l_cptr[0] == '\0')
	{
		return(b_cptr);
	}
	while (b_cptr[index] != '\0' && index < len)
	{
		if((little_len + index) > len)
			return(NULL);
		if (ft_strncmp(l_cptr, b_cptr+ index, little_len) == 0)
			return(b_cptr+index);
		index++;
	}
	return(NULL);
}

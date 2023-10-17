/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strncmp.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/08 16:15:25 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/17 21:15:08 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t index;
	int returnval;
	char * s1_cptr;
	char * s2_cptr;

	index = 0;
	returnval = 0;
	s1_cptr = (char*)s1;
	s2_cptr = (char*)s2;
	if (n > 0)
		returnval = (s1_cptr[index] - s2_cptr[index]);
	while (index < n - 1 && s1_cptr[index] != '\0' && s2_cptr[index] != '\0')
	{
		index++;
		returnval = returnval + (s1_cptr[index] - s2_cptr[index]);
	}
	return(returnval);
}

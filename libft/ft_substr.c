/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/10 21:36:05 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/19 20:59:11 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <bsd/string.h>
// #include <stdio.h>
// #include "ft_strlen.c"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	void * s_vptr;
	char * s_cptr;
	char * ns_cptr;
	size_t index;

	s_vptr = malloc(len+1);
	if (s_vptr == NULL)
		return(NULL);
	s_cptr = (char*)s;
	ns_cptr = (char*)s_vptr;
	index = 0;

	while (index < len && s_cptr[start] != '\0')
	{
		ns_cptr[index] = s_cptr[start];
		start++;
		index++;
	}
	ns_cptr[index] = '\0';
	return(ns_cptr);
}

// int main ()
// {
// 	char * s = ft_substr("tripouille", 0, 42000);
// 	printf("%s\n", s);
// 	printf("%d\n", !strcmp(s, "tripouille"));


// 	return(0);
// }
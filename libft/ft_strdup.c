/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/10 20:35:22 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/10 20:49:07 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <bsd/string.h>
#include "ft_strlen.c"
#include "ft_strncmp.c"


char *ft_strdup(const char *s)
{
	char *s_cptr;
	size_t s_len;
	void * ns_vptr;
	char * ns_cptr;
	size_t index;

	s_cptr = (char *)s;
	s_len = ft_strlen(s_cptr);

	ns_vptr = malloc(s_len);
	ns_cptr = (char *)ns_vptr;
	index = 0;

	while (index <= s_len)
	{
		ns_cptr[index] = s_cptr[index];
		index++; 
	}
	return(ns_cptr);
}

int main ()
{
	const char test1[20] = "5";
	const char test2[20] = "120";
	const char test3[20] = "bobo";

	printf("%s\n", strdup(test1));
	printf("%s\n", ft_strdup(test1));
	printf("%s\n", strdup(test2));
	printf("%s\n", ft_strdup(test2));
	printf("%s\n", strdup(test3));
	printf("%s\n", ft_strdup(test3));
	return(0);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_substr.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/10 21:36:05 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/19 21:56:10 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// #include <bsd/string.h>
// #include <stdio.h>
// #include "ft_strlen.c"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
	char * s_cptr;
	char * ns_cptr;
	size_t index;

	if(start >= ft_strlen(s))
		return(ft_strdup(""));
	if (len > ft_strlen(s + start))
		len = ft_strlen(s + start);
	ns_cptr =  (char*)malloc(len+1);
	if (ns_cptr == NULL)
		return(NULL);
	s_cptr = (char*)s;
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
// 	free(s);


// 	return(0);
// }
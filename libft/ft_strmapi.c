/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strmapi.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/15 20:21:09 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/15 21:56:28 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "ft_strlen.c"

// char pluschar(unsigned int ui, char c)
// {
// 	c = c + 1;
// 	return (c);
// }

char * ft_strmapi(char const *s, char (*f) (unsigned int, char))
{
	int index;
	size_t s_len;
	char *new_string;
	char r_char;

	s_len = ft_strlen(s);
	new_string = (char*)malloc(s_len + 1);
	index = 0;
	
	if (new_string == NULL)
		return(NULL);
	while (s[index] != '\0')
	{
		r_char = f(index, s[index]);
		new_string[index] = r_char;
		index++;
	}
	new_string[index] = '\0';
	return(new_string);
}


// int main ()
// {
// 	char const * test = "ABCDEFGH";

// 	printf("%s", ft_strmapi(test, pluschar));
// 	return(0);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/11 19:38:41 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/19 23:47:45 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>
#include <stdio.h>
#include "ft_strlen.c"
#include "ft_strlcpy.c"

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
	s_return = 0;

	while(istrimmable(s1_cptr, set))
	{
		s1_cptr++;
	}
	remainder = ft_strlen(s1);
	while(istrimmable((s1_cptr + remainder) - 1, set) && remainder > 0)
	{
		remainder--;
	}
	s_return = (char*)malloc(remainder);
	if (s_return == NULL)
		return(NULL);
	ft_strlcpy(s_return, (const char*)s1_cptr, remainder + 1);
	s_return[remainder + 1] = '\0';
	return(s_return);
}

int main ()
{
	char * s = ft_strtrim("   xxxtripouille", " x");
	printf("%s\n",s);
	printf("%d\n",!strcmp(s, "tripouille"));
	printf("%d\n",s[11]);

}
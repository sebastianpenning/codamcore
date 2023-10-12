/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strtrim.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/11 19:38:41 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/12 13:03:00 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <bsd/string.h>
#include "ft_strncmp.c"
#include "ft_strlcpy.c"

size_t ft_strlen2(const char *s){
    if (s[0] == '\0')
    {
        return(0);
    }
    else
    {
        size_t index;
        index = 0;

        while (s[index] != '\0')
        {
            index++;   
        }
        return index;
    }
}


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
	remainder = ft_strlen2(s1_cptr);
	while(istrimmable((s1_cptr + remainder) - 1, set) && remainder > 0)
	{
		remainder--;
	}
	s_return = (char*)malloc(remainder) + 1;
	ft_strlcpy(s_return, (const char*)s1_cptr, remainder + 1);
	return(s_return);
}

int main()
{
	const char firstTest1[10] = "ABAABA";
	const char firstTest2[10] = "AABA!AAB";
	const char firstTest3[10] = "ABA ABA";
	const char firstTest4[10] = "AA ABA";
	const char firstTest5[10] = "ABA ABA";
	const char firstTest6[10] = "ABA ABA";
	const char firstTest7[10] = " ABA ABA ";
	const char firstTest8[10] = "ABA ABA ";

	const char secondTest1[10] = "A";
	const char secondTest2[10] = "AB";
	const char secondTest3[10] = "BA";
	const char secondTest4[10] = "A ";
	const char secondTest5[9] = "ABA ";
	const char secondTest6[9] = "";
	const char secondTest7[10] = "AB";
	const char secondTest8[10] = "BA";

	// printf("%s\n", ft_strtrim(firstTest1, secondTest1));
	// printf("%s\n", ft_strtrim(firstTest2, secondTest2));
	// printf("%s\n", ft_strtrim(firstTest3, secondTest3));
	// printf("%s\n", ft_strtrim(firstTest4, secondTest4));
	// printf("%s\n", ft_strtrim(firstTest5, secondTest5));
	printf("%s\n", ft_strtrim(firstTest6, secondTest6));

	return(0);
}
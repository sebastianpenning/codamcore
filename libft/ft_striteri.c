/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_striteri.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/15 21:56:09 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/15 22:13:44 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "ft_strlen.c"

// void pluschar(unsigned int ui, char* s)
// {
// 	int change;
// 	char n_char;
// 	change = (int)s[ui];
// 	change = change + 1;
// 	s[ui] = change;
// 	return;
// }


void ft_striteri (char *s, void (*f)(unsigned int, char*))
{
	unsigned int index;

	index = 0;

	while (s[index] != '\0')
	{
		f(index, s);
		index++;
	}
	return;
}

// int main()
// {
// 	char test[10] = "ABCDEFGH";
// 	ft_striteri(test, pluschar);
// 	printf("%s", test);
// 	return(0);
// }
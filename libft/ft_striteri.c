/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_striteri.c                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/15 21:56:09 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/16 20:05:17 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <ctype.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#include "ft_strlen.c"

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
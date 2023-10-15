/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_tolower.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/04 14:52:21 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/15 22:23:50 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include <unistd.h>
#include <ctype.h>

int ft_tolower(int c)
{
	if (c > 64 && c < 91)
	{
		c = c + 32;
		return(c);
	}
	else
	{
		return(c);
	}
}

int main ()
{	
	int var1 = 'c';
	int var2 = 'C';
	int var3 = ';';
	int var4 = '[';

	printf("The result is %c\n", ft_tolower(var1));
	printf("The result is %c\n", ft_tolower(var2));
	printf("The result is %c\n", ft_tolower(var3));
	printf("The result is %c\n", ft_tolower(var4));

	return(0);
}
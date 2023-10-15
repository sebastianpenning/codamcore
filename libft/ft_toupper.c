/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_toupper.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/04 14:34:13 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/15 22:23:28 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include <unistd.h>
#include <ctype.h>

char ft_toupper(int c)
{
	if (c > 96 && c <123)
	{
		c = c - 32;
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
	int var2 = '4';
	int var3 = ';';
	int var4 = 'L';

	printf("The Result is %c\n", ft_toupper(var1));
	printf("The Result is %c\n", ft_toupper(var2));
	printf("The Result is %c\n", ft_toupper(var3));
	printf("The Result is %c\n", ft_toupper(var4));

	
	return(0);
}
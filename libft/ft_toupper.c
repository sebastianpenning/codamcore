/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spenning <spenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:34:13 by spenning          #+#    #+#             */
/*   Updated: 2023/10/04 14:50:22 by spenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include <unistd.h>
#include <ctype.h>

char ft_toupper(int input)
{
	if (input > 96 && input <123)
	{
		input = input - 32;
		return(input);
	}
	else
	{
		return(input);
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
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spenning <spenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:52:21 by spenning          #+#    #+#             */
/*   Updated: 2023/10/04 14:58:29 by spenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include <unistd.h>
#include <ctype.h>

int ft_tolower(int input)
{
	if (input > 64 && input < 91)
	{
		input = input + 32;
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
	int var2 = 'C';
	int var3 = ';';
	int var4 = '[';

	printf("The result is %c\n", ft_tolower(var1));
	printf("The result is %c\n", ft_tolower(var2));
	printf("The result is %c\n", ft_tolower(var3));
	printf("The result is %c\n", ft_tolower(var4));

	return(0);
}
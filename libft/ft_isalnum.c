/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spenning <spenning@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:00:52 by spenning          #+#    #+#             */
/*   Updated: 2023/10/04 14:19:47 by spenning         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <ctype.h>

int	ft_isalnum(int input)
{
	if ((input > 47 && input < 58) || (input > 64 && input < 91)
		|| (input > 96 && input < 123))
	{
		return (1);
	}
	else
	{
	return (0);
	}
}


int main ()
{
	int var1 = 'c';
	int var2 = '1';
	int var3 = ']';
	int var4 = '@';

	printf("\nThe result is %d", ft_isalnum(var1));
	printf("\nThe result is %d", ft_isalnum(var2));
	printf("\nThe result is %d", ft_isalnum(var3));
	printf("\nThe result is %d", ft_isalnum(var4));
	return (0);
}

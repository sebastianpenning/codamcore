/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/12 19:34:43 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/12 20:59:01 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_putchar_fd.c"

void ft_putnbr_fd(int d, int fd)
{
	long int ld;
	ld = (long int)d;

	if (ld < 0)
	{
		ft_putchar_fd('-', fd);
		ld *= -1;
	}
	if (ld == 0)
	{
		ft_putchar_fd('0', fd);
	}
	if (ld > 0)
	{
		if (ld > 9)
		{
			ft_putnbr_fd(ld / 10, fd);
		}
		ft_putchar_fd(48 + (ld % 10), fd);
	}
}

int main ()
{
	int test = 1235;
	ft_putnbr_fd(test, 2);

	return(0);
}
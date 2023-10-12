/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putnbr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/12 19:34:43 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/12 19:39:42 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_strlen.c"

void ft_putnbr_fd(int d, int fd)
{
	char output;
	output = (char)d;
	write(fd, &output, 1);
}

int main ()
{
	int test = 1;
	ft_putnbr_fd(test, 2);

	return(0);
}
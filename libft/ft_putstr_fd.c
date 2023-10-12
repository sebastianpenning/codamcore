/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putstr_fd.c                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/12 18:44:17 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/12 19:11:25 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "ft_strlen.c"

void ft_putstr_fd(char* s, int fd) 
{
	write(fd, s, ft_strlen(s));
}


int main()
{
	char test[10] = "ccc";
	ft_putstr_fd(test, 1);
	return(0);
}
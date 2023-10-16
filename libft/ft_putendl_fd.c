/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putendl_fd.c                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/12 19:13:18 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/16 20:04:33 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include "ft_strlen.c"

void ft_putendl_fd(char *s, int fd)
{
	char endl = '\n';
	write(fd, s, ft_strlen(s));
	write(fd, &endl, 1);
}
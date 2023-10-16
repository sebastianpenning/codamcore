/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlen.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/04 13:57:49 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/16 20:25:25 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlen(const char *s)
{
    if (s[0] == '\0')
    {
        return(0);
    }
    else
    {
        size_t index;
        index = 0;

        while (s[index] != '\0')
        {
            index++;   
        }
        return index;
    }
}

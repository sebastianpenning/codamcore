/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isascii.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/16 20:08:23 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/16 20:08:26 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include <unistd.h>
#include <ctype.h>

int ft_isascii(int c){
    if (c>=0 && c<=127)
    {
        return(1);
    }    
    else
    {
        return(0);
    }
}

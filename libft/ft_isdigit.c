/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_isdigit.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/16 20:08:31 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/16 20:08:36 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h> 
#include <unistd.h>
#include <ctype.h>


int ft_isdigit(int c){
    if (c > 47 && c < 58)
    {
        return (1);
    }
    else{
        return (0);
    }
}

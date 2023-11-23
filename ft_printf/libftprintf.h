/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   libftprintf.h                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/21 23:03:23 by spenning      #+#    #+#                 */
/*   Updated: 2023/11/23 13:21:14 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// These are header guards that prevent the double definitions in the
// source file. This prevents library dependency from double copying
// libraries. if libft is already defined if won't define it again.
// name is LIBFT_H because the name should be the full filename of the
// header file, in all caps, with underscores for spaces and ​punctuation.

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

//these inclusions are needed to be able to use the write function from
// unistd library. and malloc and free from the stdlib library.

#include <stdarg.h>
#include <unistd.h>
#include "libft/libft.h"

int     ft_printf(const char *format, ...);
int     ft_printchar(va_list args);
int     ft_printstr(va_list args);
int     ft_printdec(va_list args);

#endif

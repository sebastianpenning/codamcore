/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strlcat.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: spenning <spenning@student.42.fr>            +#+                     */
/*                                                   +#+                      */
/*   Created: 2023/10/07 20:43:08 by spenning      #+#    #+#                 */
/*   Updated: 2023/10/19 13:15:09 by spenning      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size) {
    size_t dst_len = ft_strlen(dst);
    size_t src_len = ft_strlen(src);
    size_t num_to_copy = size - dst_len - 1;

    if (size <= dst_len)
        return size + src_len;

    if (num_to_copy > src_len)
        num_to_copy = src_len;

    if (num_to_copy > 0) {
        ft_memcpy(dst + dst_len, src, num_to_copy);
        dst[dst_len + num_to_copy] = '\0';
    }

    return (dst_len + src_len);
}
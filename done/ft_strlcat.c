/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 11:16:20 by rburri            #+#    #+#             */
/*   Updated: 2021/10/25 11:16:21 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcat(char *dest, const char *src, size_t size)
{
    size_t len_dest;
    size_t len_src;
    size_t i;
    size_t j;

    j = 0;
    i = 0;
    len_dest = ft_strlen(dest);
    len_src = ft_strlen(src);
    if (size <= len_dest)
        return (size = len_src);
    while (dest[i] && i < size - 1)
        i++;
    while (src[j] && i < size - 1)
    {
        dest[i] = src[j];
        i++;
        j++;
    }
    dest[i] = '\0';
    return (len_dest + len_src);
}
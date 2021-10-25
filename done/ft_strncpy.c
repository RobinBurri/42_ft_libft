/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 11:01:50 by rburri            #+#    #+#             */
/*   Updated: 2021/10/25 11:01:52 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dest, const char *src, size_t n)
{
	int i;
	
	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;	
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}


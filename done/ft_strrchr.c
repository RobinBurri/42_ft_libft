/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 11:02:26 by rburri            #+#    #+#             */
/*   Updated: 2021/10/27 17:52:10 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	const char	*tmp;
	size_t	i;

	tmp = s;
	i = ft_strlen(s);
	s = (s + i);
	while (*s != *tmp && *s != c)
		s--;
	if (*s == c)
		return ((char *)s);
	return (0);
}

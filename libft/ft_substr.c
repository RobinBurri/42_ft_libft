/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:30:55 by rburri            #+#    #+#             */
/*   Updated: 2021/10/28 11:32:53 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newstr;
	size_t	i;
	size_t	j;
	size_t max_len;

	if (!s)
		return (NULL);
	if (len > ft_strlen(s))
		max_len = ft_strlen(s);
	else
		max_len = len;
	newstr = (char *)malloc(sizeof(char) * (max_len + 1));
	if (!newstr)
		return (NULL);
	i = 0;
	j = start;
	while (j < ft_strlen(s) && i < max_len)
		newstr[i++] = s[j++];
	return (newstr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 14:30:55 by rburri            #+#    #+#             */
/*   Updated: 2021/10/26 14:52:02 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newstr;
	size_t	i;
	size_t	st;
	int slen;
	
	st = len;
	i = 0;
	slen = ft_strlen(s);
	if (s == NULL)
		return (NULL);
	newstr = (char *)malloc(sizeof(char) * len + 1);
	if (!newstr)
		return (NULL);
	while (start < slen && i < len)
	{
		newstr[i] = s[st + i];
		i++;
	}
	newstr[i] = '\0';
	return (newstr);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 17:24:04 by rburri            #+#    #+#             */
/*   Updated: 2021/10/25 17:24:05 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */



#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*new_string;
	size_t	i[2];

	if (s != NULL)
	{
		new_string = (char*)malloc(sizeof(char) * len + 1);
		if (!new_string)
			return (0);
		i[0] = start;
		i[1] = 0;
		while (i[0] < ft_strlen(s) && i[1] < len)
		{
			new_string[i[1]] = s[i[0]];
			i[1]++;
			i[0]++;
		}
		new_string[i[1]] = '\0';
		return (new_string);
	}
	return (NULL);
}
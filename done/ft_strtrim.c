/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 15:48:06 by rburri            #+#    #+#             */
/*   Updated: 2021/10/27 08:18:15 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static	int		ft_isset(char const *set, char c)
{
	int	i;
	
	i = 0;
	while(set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	if (c == set[i])
		return (1);
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*new_str;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !set)
		return (0);
	new_str = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	while (s1[i])
	{
		if (ft_isset(set, s1[i]) == 1)
			i++;
		else
			new_str[j++] = s1[i++];
	}
	new_str[j] = '\0';
	return (new_str);
}

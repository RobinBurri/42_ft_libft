/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/26 13:46:08 by rburri            #+#    #+#             */
/*   Updated: 2021/10/26 13:49:23 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*new_string;
	int		i[2];

	if (s1 != NULL && s2 != NULL)
	{
		new_string = (char *)malloc(sizeof(char) * (ft_strlen(s1)
					+ ft_strlen(s2)) + 1);
		if (!new_string)
			return (0);
		i[0] = 0;
		while (s1[i[0]])
		{
			new_string[i[0]] = s1[i[0]];
			i[0]++;
		}
		i[1] = 0;
		while (s2[i[1]])
			new_string[i[0]++] = s2[i[1]++];
		new_string[i[0]] = '\0';
		return (new_string);
	}
	return (NULL);
}

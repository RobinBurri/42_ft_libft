/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/25 11:04:59 by rburri            #+#    #+#             */
/*   Updated: 2021/10/25 11:05:05 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strdup(const char *s)
{
    int i;
    int len;
    char *ret;
    
    i = 0;
    len = ft_strlen(s);
    ret = (char *)malloc((len + 1) * sizeof(char));
    if (ret == NULL)
        return (NULL);
    while (s[i])
    {
        ret[i] = s[i];
        i++;
    }
    ret[i] = '\0';
    return (ret);
}
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rburri <rburri@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/27 08:02:15 by rburri            #+#    #+#             */
/*   Updated: 2021/10/27 14:42:09 by rburri           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_nbdigits(int nb)
{
	int				res;
	unsigned int	unsigned_nb;

	if (nb < 0)
		unsigned_nb = nb * -1;
	else
		unsigned_nb = nb;
	res = 1;
	while (unsigned_nb >= 10)
	{
		res++;
		unsigned_nb /= 10;
	}
	return (res);
}

char	*ft_itoa(int n)
{
	char	*res;
	int		len;
	long	nbr;

	nbr = n;
	if (nbr < 0)
	{
		nbr *= -1;
		len = ft_nbdigits(n) + 1;
	}
	else
		len = ft_nbdigits(n);
	res = (char *)malloc(sizeof(char) * len + 1);
	if (res == NULL)
		return (NULL);
	res[len--] = '\0';
	while (nbr > 0)
	{
		res[len--] = nbr % 10 + '0';
		nbr /= 10;
	}
	if (len == 0 && res[1] == '\0')
		*(res + len) = '0';
	else if (len == 0 && res[1] != '\0')
		*(res + len) = '-';
	return (res);
}

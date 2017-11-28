/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolivier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 13:05:28 by nolivier          #+#    #+#             */
/*   Updated: 2016/11/23 13:40:51 by nolivier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int	ft_len_n(int nbr)
{
	int				count;
	unsigned int	n;

	count = 0;
	if (nbr < 0)
	{
		n = -nbr;
		count++;
	}
	else
		n = nbr;
	while (n >= 10)
	{
		n = n / 10;
		count++;
	}
	count++;
	return (count);
}

char		*ft_itoa(int n)
{
	char			*str;
	int				i;
	int				len;
	unsigned int	nb;

	len = ft_len_n(n);
	str = (char*)malloc(sizeof(char) * (len + 1));
	if (str == 0)
		return (0);
	i = 0;
	if (n < 0)
		nb = -n;
	else
		nb = n;
	while (i < len)
	{
		str[len - 1 - i] = '0' + nb % 10;
		nb = nb / 10;
		i++;
	}
	if (n < 0)
		str[0] = '-';
	str[i] = '\0';
	return (str);
}

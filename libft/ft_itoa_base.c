/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: exam <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/08 13:20:17 by exam              #+#    #+#             */
/*   Updated: 2016/11/26 12:24:40 by nolivier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int		ft_len_val(int value, int base)
{
	int				count;
	unsigned int	n;

	count = 0;
	if (value < 0)
	{
		n = -value;
		count++;
	}
	else
		n = value;
	while (n >= (unsigned int)base)
	{
		n = n / base;
		count++;
	}
	count++;
	return (count);
}

char			*ft_itoa_base(int value, int base)
{
	char			*str;
	char			*b;
	int				len;
	int				i;
	unsigned int	val;

	b = "0123456789ABCDEF";
	len = ft_len_val(value, base);
	str = (char*)malloc(sizeof(char) * (len + 1));
	if (value < 0)
		val = -value;
	else
		val = value;
	i = 0;
	while (i < len)
	{
		str[len - 1 - i] = b[val % base];
		val = val / base;
		i++;
	}
	if (value < 0)
		str[0] = '-';
	str[i] = '\0';
	return (str);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolivier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 12:21:00 by nolivier          #+#    #+#             */
/*   Updated: 2016/11/09 12:32:10 by nolivier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char		*pdst;
	char		*psrc;
	size_t		i;

	pdst = (char*)dst;
	psrc = (char*)src;
	i = 0;
	if (psrc > pdst)
	{
		while (i < len)
		{
			pdst[i] = psrc[i];
			i++;
		}
	}
	else
	{
		while (i < len)
		{
			pdst[len - 1 - i] = psrc[len - 1 - i];
			i++;
		}
	}
	return (dst);
}

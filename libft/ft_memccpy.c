/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolivier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 11:53:36 by nolivier          #+#    #+#             */
/*   Updated: 2016/11/23 16:13:08 by nolivier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void		*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*pdst;
	unsigned char	*psrc;
	unsigned char	a;
	size_t			i;

	pdst = (unsigned char*)dst;
	psrc = (unsigned char*)src;
	a = c;
	i = 0;
	while (i < n)
	{
		pdst[i] = psrc[i];
		if (psrc[i] == a)
			return (pdst + i + 1);
		i++;
	}
	return (0);
}

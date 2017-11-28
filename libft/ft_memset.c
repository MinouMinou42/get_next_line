/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolivier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/09 11:24:36 by nolivier          #+#    #+#             */
/*   Updated: 2016/11/09 11:28:23 by nolivier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memset(void *b, int c, size_t len)
{
	char		*pb;
	size_t		i;

	pb = (char*)b;
	i = 0;
	while (i < len)
	{
		pb[i] = c;
		i++;
	}
	return (b);
}
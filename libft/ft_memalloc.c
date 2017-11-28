/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolivier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/11 12:55:04 by nolivier          #+#    #+#             */
/*   Updated: 2016/11/14 12:30:28 by nolivier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>

void	*ft_memalloc(size_t size)
{
	char	*mem;
	size_t	i;

	if ((mem = malloc(size)))
	{
		i = 0;
		while (i < size)
		{
			mem[i] = 0;
			i++;
		}
		return (mem);
	}
	return (NULL);
}

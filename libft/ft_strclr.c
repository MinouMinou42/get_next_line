/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolivier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 12:59:23 by nolivier          #+#    #+#             */
/*   Updated: 2016/11/23 11:48:40 by nolivier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void		ft_strclr(char *s)
{
	unsigned int		i;

	if (s)
	{
		i = 0;
		while (s[i])
		{
			s[i] = '\0';
			i++;
		}
	}
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolivier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 13:00:51 by nolivier          #+#    #+#             */
/*   Updated: 2016/11/21 13:00:53 by nolivier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char		*ft_strmap(char const *s, char (*f)(char))
{
	char			*new;
	unsigned int	i;

	if (s)
	{
		i = 0;
		while (s[i])
			i++;
		new = (char*)malloc(sizeof(char) * (i + 1));
		if (new == 0)
			return (0);
		i = 0;
		while (s[i])
		{
			new[i] = f(s[i]);
			i++;
		}
		new[i] = '\0';
		return (new);
	}
	return (0);
}

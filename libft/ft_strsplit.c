/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolivier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 13:04:45 by nolivier          #+#    #+#             */
/*   Updated: 2016/11/23 13:42:01 by nolivier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

static int			ft_count(char const *str, char c)
{
	int				i;
	int				n;

	n = 0;
	i = 0;
	while (str[i])
	{
		while (str[i] == c)
			i++;
		if (str[i] != c && str[i])
		{
			n++;
			while (str[i + 1] != c && str[i + 1])
				i++;
		}
		else if (str[i] == '\0')
			return (n);
		i++;
	}
	return (n);
}

static char			*ft_create_str(char const *str, unsigned int *start, char c)
{
	unsigned int	len;
	unsigned int	i;
	char			*tab;

	len = 0;
	while (str[*start + len] != c && str[*start + len])
		len++;
	tab = (char*)malloc(sizeof(char) * (len + 1));
	if (tab == 0)
		return (0);
	i = 0;
	while (i < len)
	{
		tab[i] = str[*start + i];
		i++;
	}
	*start += i - 1;
	tab[i] = '\0';
	return (tab);
}

static char			**ft_assign(char **tab, char const *s, char c)
{
	unsigned int	i;
	int				n;

	n = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != c && s[i])
		{
			tab[n] = ft_create_str(s, &i, c);
			n++;
			while (s[i + 1] != c && s[i + 1])
				i++;
		}
		else if (s[i] == '\0')
		{
			tab[n] = 0;
			return (tab);
		}
		i++;
	}
	tab[n] = 0;
	return (tab);
}

char				**ft_strsplit(char const *s, char c)
{
	char			**tab;

	if (!s || !c)
		return (0);
	tab = (char**)malloc(sizeof(char*) * (ft_count(s, c) + 1));
	if (tab == 0)
		return (0);
	tab = ft_assign(tab, s, c);
	return (tab);
}

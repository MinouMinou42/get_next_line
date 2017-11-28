/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolivier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 13:03:29 by nolivier          #+#    #+#             */
/*   Updated: 2016/11/21 13:03:31 by nolivier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int		ft_strlen_trim(char const *s)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	count;

	count = 0;
	i = 0;
	while (s[i] && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i++;
	j = 0;
	while (s[i + j])
	{
		while (s[i + j] == ' ' || s[i + j] == '\n' || s[i + j] == '\t')
			j++;
		if (s[i + j])
			count = j + 1;
		else
			return (count);
		j++;
	}
	return (count);
}

char				*ft_strtrim(char const *s)
{
	char			*new;
	unsigned int	i;
	unsigned int	j;
	unsigned int	len;

	if (!s)
		return (0);
	len = ft_strlen_trim(s);
	new = (char*)malloc(sizeof(char) * (len + 1));
	if (new == NULL)
		return (NULL);
	i = 0;
	while (s[i] && (s[i] == ' ' || s[i] == '\n' || s[i] == '\t'))
		i++;
	j = 0;
	while (j < len)
	{
		new[j] = s[i + j];
		j++;
	}
	new[j] = '\0';
	return (new);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolivier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 11:42:11 by nolivier          #+#    #+#             */
/*   Updated: 2016/11/18 14:19:41 by nolivier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	unsigned int	i;
	unsigned int	last;

	last = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			last = i;
		i++;
	}
	if (s[last] == c)
		return ((char*)(s + last));
	if (s[i] == c)
		return ((char*)(s + i));
	return (0);
}

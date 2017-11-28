/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolivier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/10 12:16:02 by nolivier          #+#    #+#             */
/*   Updated: 2016/11/10 15:46:07 by nolivier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(const char *big, const char *little)
{
	unsigned int	i;
	unsigned int	j;

	if (little[0] == '\0')
		return ((char*)big);
	i = 0;
	while (big[i])
	{
		if (big[i] == little[0])
		{
			j = 0;
			while (big[i + j] == little[j] && little[j])
				j++;
			if (little[j] == '\0')
				return ((char*)(big + i));
		}
		i++;
	}
	return (0);
}

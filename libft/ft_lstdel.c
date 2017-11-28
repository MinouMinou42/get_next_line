/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolivier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 16:32:28 by nolivier          #+#    #+#             */
/*   Updated: 2016/11/22 10:26:31 by nolivier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

void		ft_lstdel(t_list **alst, void (*del)(void*, size_t))
{
	t_list		*tmp;
	t_list		*next;

	if (alst)
	{
		tmp = *alst;
		while (tmp)
		{
			del(tmp->content, tmp->content_size);
			next = tmp->next;
			free(tmp);
			tmp = next;
		}
		*alst = NULL;
	}
}

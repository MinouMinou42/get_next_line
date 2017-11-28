/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolivier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 16:33:16 by nolivier          #+#    #+#             */
/*   Updated: 2016/11/25 14:56:45 by nolivier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdlib.h>
#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*new;
	t_list		*tmp;
	t_list		*first;

	if (!lst)
		return (NULL);
	first = (t_list*)malloc(sizeof(t_list));
	if (first == NULL)
		return (NULL);
	first = f(lst);
	lst = lst->next;
	tmp = first;
	while (lst)
	{
		new = (t_list*)malloc(sizeof(t_list));
		if (new == NULL)
			return (NULL);
		new = f(lst);
		lst = lst->next;
		tmp->next = new;
		tmp = tmp->next;
	}
	tmp->next = NULL;
	return (first);
}

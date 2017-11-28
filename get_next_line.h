/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nolivier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 12:58:01 by nolivier          #+#    #+#             */
/*   Updated: 2017/01/02 13:14:01 by nolivier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# define BUFF_SIZE 1

struct	s_rest
{
	int				fd;
	char			*rest;
	struct s_rest	*next;
};

typedef struct s_rest	t_rest;
int		get_next_line(const int fd, char **line);

#endif

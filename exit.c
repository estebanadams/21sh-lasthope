/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleclet <eleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/10 22:49:02 by eleclet           #+#    #+#             */
/*   Updated: 2017/03/27 14:38:12 by eleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void	super_exit(t_env *env)
{
	ft_tabdel(env->t);
	ft_tabndel(env->hist->tab, HLEN);
	free(env->hist);
	free(env);
	exit(EXIT_SUCCESS);
}

bool	b_echo(char **line)
{
	t_line *l;

	l = stock(NULL, 1);
	if (ft_tablen(line) == 1)
		return (ft_err("echo : error no arg.", NULL, NULL, 1));
	while (line && *line)
	{
		line++;
		ft_putstr_fd(*line, l->h->fd);
		if (line + 1)
		ft_putchar_fd(' ', l->h->fd);
	}
	ft_putchar_fd('\n', l->h->fd);
	return (1);
}


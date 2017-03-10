/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   somefunc.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleclet <eleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/09 00:30:35 by eleclet           #+#    #+#             */
/*   Updated: 2017/03/09 00:47:10 by eleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "header.h"

int	ctrl_d(t_line *line)
{
	if (ft_strlen(line->str) != 0 || line->h->status == 1)
		return (0);
	else 
	{
		ft_strdel(&line->str);
		line->str = ft_strdup("exit");
		return(-1);
	}
}

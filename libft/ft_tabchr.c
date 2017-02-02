/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_chrtab.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleclet <eleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/31 21:56:23 by eleclet           #+#    #+#             */
/*   Updated: 2017/02/01 20:30:42 by eleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tabchr(char **tab, char *s, char split)
{
	int r;
	char **arg;
	char **arg1;

	arg = ft_strsplit(s, split);

	r = 0;
	if (!tab)
		return (-1);
	while (tab[r])
	{
		arg1 = ft_strsplit(tab[r], split);
		if (ft_strcmp(arg[0], arg1[0]) == 0)
			return (r);
		r++;
		ft_tabdel(arg1);
	}
	ft_tabdel(arg);
	return (-1);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tabrmstr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleclet <eleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/30 21:02:07 by eleclet           #+#    #+#             */
/*   Updated: 2017/01/31 22:22:08 by eleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_tabrmstr(char **t, char *s)
{
	char **r;
	int i;

	r = NULL;
	i = 0;

	if (!t && !*t)
		return (t);
	while (t[i])
	{
		if (strcmp(s, t[i]) != 0)
			r = ft_tabaddstr(r, t[i]);
		i++;
	}
	ft_tabdel(t);
	return (r);

	
}
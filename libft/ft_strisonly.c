/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisonly.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleclet <eleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/28 16:03:51 by eleclet           #+#    #+#             */
/*   Updated: 2017/03/28 17:01:47 by eleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strisonly(char *str, char c)
{
	while (str)
	{
		if (*str != c)
			return (0);
		str++;
	}
	return (1);
}

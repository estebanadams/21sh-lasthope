/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_numbetween.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleclet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/04/05 19:19:30 by eleclet           #+#    #+#             */
/*   Updated: 2017/04/05 19:31:45 by eleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_numbtw(int n1, int n2, int i)
{
		if (n1 <= i  && i <= n2)
			return (1);
		else
			return (0);
}

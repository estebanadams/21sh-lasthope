/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleclet <eleclet@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/01/09 14:27:20 by eleclet           #+#    #+#             */
/*   Updated: 2017/01/10 18:07:36 by eleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int	main()
{
	char *s = "Juliette";

	
	
	s = s_del(s, 5);
	ft_putendl(s);
	return (0);
}

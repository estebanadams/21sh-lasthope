/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_straddstr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eleclet <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/03/16 17:01:23 by eleclet           #+#    #+#             */
/*   Updated: 2017/03/16 18:32:22 by eleclet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "stdio.h"

char		*ft_straddstr(char *s1, char *s2, int pos, int lenvar)
{
	char *r;
	int len;

	len = ft_strlen(s2);
	r = (char *)malloc(sizeof(char) * (len + ft_strlen(s1) + 1 - lenvar));
	r[len + ft_strlen(s1) - lenvar] = 0;
	ft_strncpy(r, s1, pos);
	ft_strncpy(r + pos, s2 + lenvar, len);
	ft_strncpy(r + pos + len, s1 + lenvar + pos, ft_strlen(s1 + pos + lenvar));
	printf("num : %lu\n", ft_strlen(s1) - lenvar - pos);
	printf("mofo %s\n", s1 + lenvar + pos);
	printf("ft_Str;enr %zu zisse all = %d\n", ft_strlen(r), pos + len);
	return (r);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 18:11:42 by zserobia          #+#    #+#             */
/*   Updated: 2024/04/29 17:01:00 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*y1;
	const unsigned char	*y2;

	i = 0;
	y1 = (const unsigned char *)s1;
	y2 = (const unsigned char *)s2;
	while (i < n)
	{
		if (y1[i] != y2[i])
			return (y1[i] - y2[i]);
		i++;
	}
	return (0);
}

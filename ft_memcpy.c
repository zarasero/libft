/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/22 16:33:16 by zserobia          #+#    #+#             */
/*   Updated: 2024/04/29 16:40:54 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*indest;
	const unsigned char	*insrc;
	size_t				i;

	i = 0;
	indest = (unsigned char *)dest;
	insrc = (unsigned char *)src;
	while (i < n)
	{
		indest[i] = insrc[i];
		i++;
	}
	return (dest);
}

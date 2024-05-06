/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 10:39:20 by zserobia          #+#    #+#             */
/*   Updated: 2024/04/29 16:42:31 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*indest;
	const unsigned char	*insrc;

	indest = (unsigned char *)dest;
	insrc = (unsigned char *)src;
	if (dest < src)
		return (ft_memcpy(dest, src, n));
	if (dest > src)
	{
		while (n >= 1)
		{
			indest[n - 1] = insrc[n - 1];
			n--;
		}
	}
	return (dest);
}

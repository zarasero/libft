/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/23 14:36:50 by zserobia          #+#    #+#             */
/*   Updated: 2024/05/02 15:19:42 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	y;

	i = 0;
	y = 0;
	while (dst[i] != '\0' && i < size)
		i++;
	while (src[y] != '\0' && (y + i + 1) < size)
	{
		dst[(i + y)] = src[y];
		y++;
	}
	if (i < size)
		dst[(i + y)] = '\0';
	return (i + ft_strlen(src));
}

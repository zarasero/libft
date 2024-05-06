/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 10:33:49 by zserobia          #+#    #+#             */
/*   Updated: 2024/05/03 12:40:37 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*p;

	if (nmemb != 0 && (nmemb * size) / nmemb != size)
		return (NULL);
	p = malloc(size * nmemb);
	if (!p)
		return (NULL);
	ft_bzero(p, size * nmemb);
	return (p);
}

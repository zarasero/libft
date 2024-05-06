/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 15:03:03 by zserobia          #+#    #+#             */
/*   Updated: 2024/05/02 17:29:39 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*str;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = 0;
	len = ft_strlen(s1);
	end = len;
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	while (start < end && ft_strchr(set, s1[end - 1]))
		end--;
	if (start >= end)
		return (ft_strdup(""));
	str = malloc(sizeof(char) * (end - start + 1));
	if (!str)
		return (NULL);
	ft_memcpy(str, s1 + start, end - start);
	str[end - start] = '\0';
	return (str);
}

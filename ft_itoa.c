/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zserobia <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/26 14:00:57 by zserobia          #+#    #+#             */
/*   Updated: 2024/04/30 15:37:01 by zserobia         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_digits(int n)
{
	int	count;
	int	num;

	count = 0;
	num = n;
	while (num != 0)
	{
		num = num / 10;
		count++;
	}
	return (count);
}

static void	fill_string(char *str, int n, int count, int sign)
{
	str[count] = '\0';
	while (n != 0)
	{
		str[--count] = (char)((n % 10) * sign + '0');
		n = n / 10;
	}
	if (sign < 0)
		str[0] = '-';
}

char	*ft_itoa(int n)
{
	char	*str;
	int		num;
	int		sign;
	int		count;

	num = n;
	count = count_digits(num);
	sign = 1;
	if (n < 0)
		sign = -1;
	count = count + (n <= 0);
	str = (char *)malloc(sizeof(char) * (count + 1));
	if (!str)
		return (str);
	if (n == 0)
	{
		str[0] = '0';
		str[1] = '\0';
		return (str);
	}
	fill_string(str, num, count, sign);
	return (str);
}

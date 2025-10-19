/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjakob <anjakob@student.42heilbronn.de>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-19 19:11:39 by anjakob           #+#    #+#             */
/*   Updated: 2025-10-19 19:11:39 by anjakob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static	size_t	intlen(int n)
{
	size_t	i;

	if (!n)
		return (1);
	i = 0;
	if (n < 0)
		i++;
	while (n)
	{
		n /= 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*s;
	size_t	len;
	long	long_n;
	size_t	sign;

	len = intlen(n);
	s = ft_calloc(sizeof(char), len + 1);
	if (!s)
		return (NULL);
	long_n = (long)n;
	sign = 0;
	if (long_n < 0)
	{
		long_n = -long_n;
		s[0] = '-';
		sign++;
	}
	while (len > sign)
	{
		s[len] = long_n % 10 + '0';
		long_n = long_n / 10;
		len--;
	}
	return (s);
}

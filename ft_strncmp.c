/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjakob <anjakob@student.42heilbronn.de>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-16 16:12:49 by anjakob           #+#    #+#             */
/*   Updated: 2025-10-16 16:12:49 by anjakob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	if ((!s1 && !s2) || n == 0)
		return (0);
	unsigned char *cast_s1;
	unsigned char *cast_s2;
	size_t	i;

	cast_s1 = (unsigned char *)s1;
	cast_s2 = (unsigned char *)s2;
	i = 0;
	while (cast_s1[i] && cast_s2[i] && cast_s1[i] == cast_s2[i] && i < n - 1)
		i++;
	return (cast_s1[i] - cast_s2[i]);
}

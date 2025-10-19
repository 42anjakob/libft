/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjakob <anjakob@student.42heilbronn.de>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-16 13:10:07 by anjakob           #+#    #+#             */
/*   Updated: 2025-10-16 13:10:07 by anjakob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	strnlen(const char *dst, size_t size)
{
	size_t	i;

	i = 0;
	while (dst[i] && i < size)
		i++;
	return (i);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_size;

	dst_size = strnlen(dst, size);
	ft_strlcpy(&dst[dst_size], src, size - dst_size);
	return (dst_size + ft_strlen(src));
}

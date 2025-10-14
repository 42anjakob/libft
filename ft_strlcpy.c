/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjakob <anjakob@student.42heilbronn.de>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-14 14:59:05 by anjakob           #+#    #+#             */
/*   Updated: 2025-10-14 14:59:05 by anjakob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	if (size == 0)
		return (ft_strlen(src));
	size_t	src_len;
	size_t	dst_len;
	size_t	len;

	src_len = ft_strlen(src);
	dst_len = ft_strlen(dst);
	len = 0;
	while (len < size - 1 && len < src_len && len < dst_len)
	{
		dst[len] = src[len];
		len++;
	}
	dst[len] = '\0';
	return (ft_strlen(src));
}

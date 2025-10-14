/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjakob <anjakob@student.42heilbronn.de>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-14 14:55:12 by anjakob           #+#    #+#             */
/*   Updated: 2025-10-14 14:55:12 by anjakob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memrcpy(void *dest, const void *src, size_t n)
{
	if (n == 0)
		return (dest);
	const unsigned char	*cast_src;
	unsigned char		*cast_dest;

	cast_src = (const unsigned char *)src;
	cast_dest = (unsigned char *)dest;
	while (--n)
		cast_dest[n] = cast_src[n];
	cast_dest[n] = cast_src[n];
	return (dest);
}

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (!dest && !src)
		return (dest);
	else if (dest <= src)
		return (ft_memcpy(dest, src, n));
	return (ft_memrcpy(dest, src, n));
}
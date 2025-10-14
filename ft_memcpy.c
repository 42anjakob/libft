/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjakob <anjakob@student.42heilbronn.de>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-14 14:50:58 by anjakob           #+#    #+#             */
/*   Updated: 2025-10-14 14:50:58 by anjakob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	if (!dest && !src)
		return (dest);

	const unsigned char	*cast_src;
	unsigned char		*cast_dest;
	size_t				len;

	cast_src = (const unsigned char *)src;
	cast_dest = (unsigned char *)dest;
	len = 0;
	while (len < n)
	{
		cast_dest[len] = cast_src[len];
		len++;
	}
	return (dest);
}

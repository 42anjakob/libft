/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjakob <anjakob@student.42heilbronn.de>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-14 14:47:54 by anjakob           #+#    #+#             */
/*   Updated: 2025-10-14 14:47:54 by anjakob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*cast_s;
	unsigned char	cast_c;
	size_t			len;

	cast_s = (unsigned char *)s;
	cast_c = (unsigned char)c;
	len = 0;
	while (len < n)
	{
		cast_s[len] = cast_c;
		len++;
	}
	return (cast_s);
}

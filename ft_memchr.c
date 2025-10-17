/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memchr.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjakob <anjakob@student.42heilbronn.de>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-17 11:48:01 by anjakob           #+#    #+#             */
/*   Updated: 2025-10-17 11:48:01 by anjakob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	if (n == 0)
		return (NULL);
	unsigned char	*cast_s;
	unsigned char	cast_c;
	size_t			i;

	cast_s = (unsigned char *)s;
	cast_c = (unsigned char)c;
	i = 0;
	while(cast_s[i] != cast_c && i < n - 1)
		i++;
	if (cast_s[i] == cast_c)
		return (&cast_s[i]);
	return (NULL);
}

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjakob <anjakob@student.42heilbronn.de>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-14 14:47:48 by anjakob           #+#    #+#             */
/*   Updated: 2025-10-14 14:47:48 by anjakob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*tmp;
	size_t			len;

	tmp = (unsigned char *)s;
	len = 0;
	while (len < n)
	{
		tmp[len] = '\0';
		len++;
	}
}

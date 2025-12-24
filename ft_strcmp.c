/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjakob <anjakob@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/24 16:52:49 by anjakob           #+#    #+#             */
/*   Updated: 2025/12/24 16:52:57 by anjakob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	unsigned char	*cast_s1;
	unsigned char	*cast_s2;
	int					i;

	cast_s1 = (unsigned char *)s1;
	cast_s2 = (unsigned char *)s2;
	i = 0;
	if (!s1 && !s2)
		return (0);
	if (!s1 || !s2)
		return (!s1) ? -1 : 1;
	while (cast_s1[i] && cast_s2[i] && cast_s1[i] == cast_s2[i])
		i++;
	return (cast_s1[i] - cast_s2[i]);
}

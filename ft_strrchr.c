/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjakob <anjakob@student.42heilbronn.de>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-16 16:07:59 by anjakob           #+#    #+#             */
/*   Updated: 2025-10-16 16:07:59 by anjakob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
	char	cast_c;
	int		i;

	cast_c = (char)c;
	i = ft_strlen(s);
	while (i > 0 && s[i] != cast_c)
		i--;
	if (s[i] == cast_c)
		return ((char *)&s[i]);
	return (NULL);
}

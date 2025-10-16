/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjakob <anjakob@student.42heilbronn.de>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-16 16:07:11 by anjakob           #+#    #+#             */
/*   Updated: 2025-10-16 16:07:11 by anjakob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
	char	cast_c;
	int	i;

	cast_c = (char)c;
	i = 0;
	while (s[i] && s[i] != cast_c)
		i++;
	if (s[i] == cast_c)
		return ((char *)&s[i]);
	return (NULL);
}

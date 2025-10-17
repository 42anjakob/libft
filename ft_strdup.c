/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjakob <anjakob@student.42heilbronn.de>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-17 14:38:21 by anjakob           #+#    #+#             */
/*   Updated: 2025-10-17 14:38:21 by anjakob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup_s;

	dup_s = malloc(sizeof(char) * ft_strlen(s) + 1);
	if (!dup_s)
		return (NULL);
	ft_strlcpy(dup_s, s, ft_strlen(s) + 1);
	return (dup_s);
}
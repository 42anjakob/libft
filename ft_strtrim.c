/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjakob <anjakob@student.42heilbronn.de>   #+#  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025-10-17 15:18:33 by anjakob           #+#    #+#             */
/*   Updated: 2025-10-17 15:18:33 by anjakob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	if (!set)
		return (NULL);
	else if (!*s1)
		return(ft_strdup(""));
	char	*trim_s;
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(s1) - 1;
	while (ft_strchr(set, s1[i]))
		i++;
	while (ft_strchr(set, s1[j]))
		j--;
	trim_s = ft_substr(s1, i, j - i + 1);
	return (trim_s);
}

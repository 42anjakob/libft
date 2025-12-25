/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anjakob <anjakob@student.42heilbronn.de    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 15:58:05 by anjakob           #+#    #+#             */
/*   Updated: 2025/12/25 15:32:23 by anjakob          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	countsubstr(const char *s, const char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		while (s[i] && s[i] == c)
			i++;
		if (s[i] && s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
	}
	return (count);
}

static size_t	substr_pos_size(const char *s, const char c, size_t *i)
{
	size_t	size;

	size = 0;
	while (s[*i] && s[*i] == c)
		*i += 1;
	while (s[*i + size] && s[*i + size] != c)
		size++;
	return (size);
}

char	**ft_split(char const *s, char c)
{
	char	**substr;
	size_t	count;
	size_t	size;
	size_t	cur_pos;
	size_t	i;

	count = countsubstr(s, c);
	substr = ft_calloc(sizeof(char *), (count + 1));
	if (!substr)
		return (NULL);
	cur_pos = 0;
	i = 0;
	while (i < count)
	{
		size = substr_pos_size(s, c, &cur_pos);
		substr[i] = ft_substr(s, cur_pos, size);
		if (!substr[i])
			return (ft_freeptr((void **)substr), NULL);
		cur_pos += size;
		i++;
	}
	return (substr);
}

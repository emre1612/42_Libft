/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkaymak <emkaymak@student.42.kocaeli.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 23:55:50 by emkaymak          #+#    #+#             */
/*   Updated: 2025/05/27 00:07:41 by emkaymak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*trimmed;

	if (!s1 || !set)
		return (NULL);

	start = 0;
	while (s1[start] && is_in_set(s1[start], set))
		start++;

	end = ft_strlen(s1);
	while (end > start && is_in_set(s1[end - 1], set))
		end--;

	trimmed = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!trimmed)
		return (NULL);

	ft_memcpy(trimmed, s1 + start, end - start);
	trimmed[end - start] = '\0';

	return (trimmed);
}
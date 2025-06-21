/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkaymak <emkaymak@student.42.kocaeli.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/22 00:46:21 by emkaymak          #+#    #+#             */
/*   Updated: 2025/06/21 02:21:15 by emkaymak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*str;
	int		len;
	int		i;

	i = 0;
	len = ft_strlen(s1);
	if (!s1)
		return (NULL);
	str = malloc(sizeof(char) * len + 1);
	if (!str)
		return (NULL);
	while (i < len)
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = '\0';
	return (str);
}
// #include <stdio.h>

// char	*ft_strdup(const char *str);

// int main(int argc, char const *argv[])
// {
//     char orjinal_string[100] = "emre can kaymak";
// 	char *kopya_pointer;

// 	kopya_pointer = ft_strdup(orjinal_string);
// 	printf("%s\n", kopya_pointer);
//     return 0;
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkaymak <emkaymak@student.42.kocaeli.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 23:07:56 by emkaymak          #+#    #+#             */
/*   Updated: 2025/06/21 03:19:52 by emkaymak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(char *dest, char *src, size_t len)
{
	size_t	i;

	i = 0;
	if (len == 0)
		return (0);
	while (i < len - 1 && dest[i] && src[i] && dest[i] == src[i])
		i++;
	return ((unsigned char)dest[i] - (unsigned char)src[i]);
}

// #include <stdio.h>

// int	main()
// {
// 	printf("%d", ft_strncmp("emre", "enre", '3'));
// }

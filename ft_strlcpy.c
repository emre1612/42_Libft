/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkaymak <emkaymak@student.42.kocaeli.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 22:01:46 by emkaymak          #+#    #+#             */
/*   Updated: 2025/06/21 03:12:21 by emkaymak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size != 0)
	{
		while (i < size - 1 && src[i])
		{
			dest[i] = src[i];
			i++;
		}
		dest[i] = '\0';
	}
	while (src[i])
		i++;
	return (i);
}
// #include <stdio.h>

// int main()
// {
// 	char kaynak[25] = "Success";
// 	char hedef[25] = "Garb";
// 	size_t bitiş = ft_strlcpy(hedef,kaynak,3);
//     printf("%s\n" ,hedef);
// 	printf("%ld" ,bitiş);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkaymak <emkaymak@student.42.kocaeli.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 21:35:13 by emkaymak          #+#    #+#             */
/*   Updated: 2025/06/21 01:42:12 by emkaymak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	return (ft_memmove(dest, src, n));
}
// #include <stdio.h>

// int	main()
// {
// 	unsigned char	src[] = " world!";
// 	unsigned char	dst[] = "hello";

// 	ft_memcpy(dst+5, src, 8);
// 	printf("%s", dst);
// }
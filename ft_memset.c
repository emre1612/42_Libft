/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkaymak <emkaymak@student.42.kocaeli.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 20:50:58 by emkaymak          #+#    #+#             */
/*   Updated: 2025/06/21 01:46:42 by emkaymak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	while (len > 0)
	{
		((char *)b)[len - 1] = c;
		len--;
	}
	return (b);
}
// #include <stdio.h>

// int	main()
// {
// 	unsigned char	b[] = "emrecan";
// 	ft_memset(b, 'a', 4);
// 	printf("%s", b);
// }
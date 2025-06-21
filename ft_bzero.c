/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkaymak <emkaymak@student.42.kocaeli.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 00:12:48 by emkaymak          #+#    #+#             */
/*   Updated: 2025/06/21 01:33:18 by emkaymak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *r, size_t num)
{
	ft_memset(r, 0, num);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char str[] = "emrecan";
// 	int i = 0;

// 	ft_bzero(str, 3);
// 	while (i < 7)
// 	{
// 		printf("%c\n",str[i]);
// 		i++;
// 	}

// 	return 0;
// }

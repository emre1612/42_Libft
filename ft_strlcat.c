/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkaymak <emkaymak@student.42.kocaeli.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 22:16:15 by emkaymak          #+#    #+#             */
/*   Updated: 2025/06/21 02:58:48 by emkaymak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	ssize;
	size_t	i;

	i = 0;
	ssize = ft_strlen(src);
	while (*dest && size > 0)
	{
		dest++;
		i++;
		size--;
	}
	while (*src && size > 1)
	{
		*dest++ = *src++;
		size--;
	}
	if (size == 1 || *src == '\0')
		*dest = '\0';
	return (ssize + i);
}
// #include <stdio.h>

// int    main()
// {
//   char  dest[20] = "emrecan";
//   char  src[10] = " kaymak";
  
//   printf("%ld\n", ft_strlcat(dest, src, 15));
//   printf("%s\n", dest);
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkaymak <emkaymak@student.42.kocaeli.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/24 22:35:15 by emkaymak          #+#    #+#             */
/*   Updated: 2025/06/21 03:28:54 by emkaymak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int i)
{
	char	*ptr;

	ptr = (char *)s;
	while (*ptr != '\0')
	{
		if (*ptr == (char)i)
			return (ptr);
		ptr++;
	}
	if ((char)i == '\0')
		return ((char *)ptr);
	return (0);
}
// #include <stdio.h> 

// int	main()
// {
// 	printf("%s", ft_strchr("fatihterim", 'e'));
// }
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkaymak <emkaymak@student.42.kocaeli.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 23:13:53 by emkaymak          #+#    #+#             */
/*   Updated: 2025/06/21 03:18:14 by emkaymak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s)
		return (NULL);
	i = 0;
	str = (char *)malloc(sizeof(char) * (ft_strlen(s)) + 1);
	if (str == NULL)
		return (NULL);
	while (s[i])
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}
// #include <stdio.h>
// char f(unsigned int a, char b) //harfleri büyütme için kullanılan f fonksiyonu
// {
// 	b = 0;
// 	return ('A' + (char)a);
// }
// int    main()
// {
//     char    s1[] = "abc";
//     char    *s2;
//     s2 = ft_strmapi(s1, *f); // printf("%s", ft_strmapi("abc", *f)) bu da olur. 
//     printf("%s", s2);
// }
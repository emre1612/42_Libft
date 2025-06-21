/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: emkaymak <emkaymak@student.42.kocaeli.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 23:22:00 by emkaymak          #+#    #+#             */
/*   Updated: 2025/06/21 03:12:55 by emkaymak         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}
// #include <stdio.h>
// #include "libft.h"

// void d(unsigned int a, char *b)
// {
// 	if(ft_toupper(*b))
// 		*b = *b - 32;
// }

// int main(int argc, char const *argv[])
// {	
//     char p[10] = "abc";
// 	ft_striteri(p,d);
// 	printf("%s|\n", p);
// }
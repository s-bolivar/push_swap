/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 15:38:38 by sbolivar          #+#    #+#             */
/*   Updated: 2024/09/25 15:38:39 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n--)
	{
		if (*str == (unsigned char)c)
			return ((void *)&*str);
		str++;
	}
	return (NULL);
}

/*int main()
{
	char *str;
	size_t c;
	size_t n = 20;
	char *test;
	c = 'm';
	str = "hola mundo";
	test = (char *)ft_memchr(str, c, n);

	printf("%s\n", test);
}*/
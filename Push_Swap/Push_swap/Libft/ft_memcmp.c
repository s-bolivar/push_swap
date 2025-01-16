/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 17:56:50 by sbolivar          #+#    #+#             */
/*   Updated: 2024/09/26 17:56:55 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)s1;
	str2 = (unsigned char *)s2;
	if (n)
		while (n--)
			if (*str1++ != *str2++)
				return (*(--str1) - *(--str2));
	return (0);
}

/*int main()
{
	const char	*s1 = "ABC";
	const char	*s2 = "AB";
	size_t	n = 3;
	printf("%d\n", ft_memcmp(s1, s2, n));
}*/
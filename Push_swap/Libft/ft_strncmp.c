/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 12:59:15 by sbolivar          #+#    #+#             */
/*   Updated: 2024/09/25 12:59:17 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned int	res;

	res = 0;
	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] && s2[i] && ((i < n - 1) && s1[i] == s2[i]))
		i++;
	res = (unsigned char)s1[i] - (unsigned char)s2[i];
	return (res);
	if (i >= n - 1)
		return (0);
	return (0);
}

/*int	main(void)
{
	const char *s1 = "ABC";
	const char *s2 = "AB";
	size_t n = 0;
	printf("%d\n", ft_strncmp(s1, s2, n));
}*/
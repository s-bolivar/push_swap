/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/18 12:43:23 by sbolivar          #+#    #+#             */
/*   Updated: 2024/09/27 08:57:44 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

size_t	ft_strlcpy(char *dst, char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (i + 1 < size && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	if (size != 0)
	{
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

/*#include <stdio.h>

int	main(void)
{
	size_t  n = 9;
	char    src[] = "hola mundo";
	char    dst[8];
	
	printf("return: %lu => \"%s\"\n", ft_strlcpy(dst, src, n), dst);
}*/

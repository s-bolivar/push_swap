/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/24 17:31:04 by sbolivar          #+#    #+#             */
/*   Updated: 2024/09/24 17:31:52 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	londst;
	size_t	lonsrc;
	size_t	i;

	londst = ft_strlen(dst);
	lonsrc = ft_strlen(((char *)src));
	if (size <= londst)
		return (lonsrc + size);
	i = londst;
	while (*src != '\0' && i < (size - 1))
		*(dst + i++) = *src++;
	*(dst + i) = '\0';
	return (londst + lonsrc);
}

/*int	main(void)
{
	size_t			size = 11;
	const char		src[] = " mundo";
	char			dst[] = "hola";

	printf("return: %lu => \"%s\"\n", ft_strlcat(dst, src, size), dst);
}*/
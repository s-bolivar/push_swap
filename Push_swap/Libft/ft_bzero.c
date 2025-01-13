/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/23 17:23:15 by sbolivar          #+#    #+#             */
/*   Updated: 2024/09/27 08:54:00 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>

void	ft_bzero(void *nmemb, size_t size)
{
	unsigned char		*p;
	size_t				i;

	p = (unsigned char *)nmemb;
	i = 0;
	while (i < size)
	{
		((char *)p)[i] = '\0';
		i++;
	}
}

/*int main()
{
	unsigned char cadena[15];
	ft_bzero(cadena, 15);
	printf("%s\n", cadena);
}*/

/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbolivar <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 11:05:22 by sbolivar          #+#    #+#             */
/*   Updated: 2024/09/30 11:05:23 by sbolivar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <stdio.h>
#include <stdlib.h>

/*char	my_func(unsigned int i, char c)
{
	(void)i;
	return (ft_toupper(c));
}*/

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*res;

	i = 0;
	res = malloc(ft_strlen(s) * sizeof(char) + 1);
	if (!res)
		return (NULL);
	while (s[i] != 0)
	{
		res[i] = (*f)(i, s[i]);
		i++;
	}
	res[i] = 0;
	return (res);
}

/*int	main(void)
{
	char *c = "hola";
	char *result = ft_strmapi(c, my_func);

	if (result)
	{
		printf("Resultado: %s\n", result);
		free(result);
	}

	return (0);
}*/